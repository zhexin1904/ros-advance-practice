#include "NodeBase.hpp"
#include "action_exp/AddAction.h"
#include <actionlib/client/simple_action_client.h>

typedef actionlib::SimpleActionClient<action_exp::AddAction> AddClient;

class ClientNode : public NodeBase

{

public:
    ClientNode(int Argc, char** Argv, const char* NodeName, int num): NodeBase(Argc, Argv, NodeName)
    {
        goal.target = num;
        Client.reset(new AddClient(*mpNodeHandle, "AddNumber", false));
    }

    ~ClientNode()
    {

    }
    
    

    void Done_cb(const actionlib::SimpleClientGoalState &state, const action_exp::AddActionResultConstPtr& result)
    {
        if (state.state_ == state.SUCCEEDED)
            ROS_INFO("Action service successed, the result is : " , result->result);
        else
            ROS_ERROR("Action service failed");
    }

    void Active_cb()
    {
        ROS_INFO("Active the action service !");
    }

    void FeedBack_cb(const action_exp::AddActionFeedbackConstPtr& FeedBack)
    {
        ROS_INFO("Current progress : ", FeedBack->feedback);
    }
    /*   
    * \param done_cb     Callback that gets called on transitions to Done
    * \param active_cb   Callback that gets called on transitions to Active
    * \param feedback_cb Callback that gets called whenever feedback for this goal is received
    */

    void Run()
    {
        Client->waitForServer();
        Client->sendGoal(goal, boost::bind(&ClientNode::Done_cb, this, _1, _2), boost::bind(&ClientNode::Active_cb, this), boost::bind(&ClientNode::FeedBack_cb, this, _1));
        
        ros::spin();
    }


private:
        std::unique_ptr<AddClient> Client;

        // AddClient* Client;
        action_exp::AddGoal goal;
};

int main(int argc, char** argv)
{
    if (argc != 2)
    {  
        ROS_ERROR("usage : rosrun ActionClient num");
        return 1;
    }

    int num  =atoi(argv[1]);

    ClientNode node(argc, argv, "ActionClient", num);
   
    node.Run();
    

    return 0;
}
