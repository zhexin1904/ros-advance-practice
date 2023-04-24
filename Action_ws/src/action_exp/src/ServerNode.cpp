#include "NodeBase.hpp"
#include "action_exp/AddAction.h"
#include <actionlib/server/simple_action_server.h>

typedef actionlib::SimpleActionServer<action_exp::AddAction> AddServer;

class ServerNode : public NodeBase
{
public:
        ServerNode(int Argc, char** Argv, const char* NodeName)
            : NodeBase(Argc, Argv, NodeName)
        {
            // Server(*mpNodeHandle, "AddNumber", boost::bind(&CallBack, _1, _2, this), false);
            
            Server.reset(new AddServer(*mpNodeHandle, "AddNumber", boost::bind(&ServerNode::CallBack, this, _1, _2), false));

            
            
        }

        

        ~ServerNode()
        {

        }

        void CallBack(const action_exp::AddGoalConstPtr &goal,  AddServer* server)
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
            
            Result.result = num;
            server->setSucceeded(Result);
        }

        void Run()
        {
            Server->start();
            

            ros::spin();
        }


private:

        std::unique_ptr<AddServer> Server;
        action_exp::AddFeedback FeedBack;
        action_exp::AddResult Result;

};

int main(int argc, char** argv)
{
    ServerNode node(argc, argv, "ActionServer");

    node.Run();
    
    return 0;
}