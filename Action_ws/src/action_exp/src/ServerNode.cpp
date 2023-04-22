#include "NodeBase.hpp"
#include "action_exp/AddAction.h"
#include <actionlib/server/simple_action_server.h>

typedef actionlib::SimpleActionServer<action_exp::AddAction> AddServer;

class ServerNode : public NodeBase
{
public:
        ServerNode(int Argc, char** Argv, const char* NodeName, ros::NodeHandle nh_)
            : NodeBase(Argc, Argv, NodeName), nodehandle_(nh_), Server(NULL)
        {
            // Server(*mpNodeHandle, "AddNumber", boost::bind(&CallBack, _1, _2, this), false);
            
            Server = new AddServer(nodehandle_, "AddNumber", boost::bind(&ServerNode::CallBack, this, _1, _2), false);
            
        }

        ~ServerNode()
        {
            delete Server;
        }

        void CallBack(const action_exp::AddGoalConstPtr &goal, AddServer* server)
        {
            size_t num = goal->target;
            // action_exp::AddFeedback FeedBack;

            ros::Rate r(10);
            for (size_t i = 0; i < num; i++)
            {
                num = num + 1;
                FeedBack.feedback = i / num;
                
                server->publishFeedback(FeedBack);
                r.sleep();
            }
            
            action_exp::AddResult Result;
            Result.result = num;
            server->setSucceeded(Result);
        
        }

        void Run()
        {
            Server->start();
            

            ros::spin();
        }


private:

        AddServer* Server;
        action_exp::AddFeedback FeedBack;
        ros::NodeHandle nodehandle_;


};

int main(int argc, char** argv)
{
    ros::NodeHandle nh1;
    ServerNode node(argc, argv, "ActionServer", nh1);

    node.Run();
    
    return 0;
}