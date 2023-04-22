#include "NodeBase.hpp"
#include "AddAction.h"
#include <actionlib/server/simple_action_server.h>

typedef actionlib::SimpleActionServer<action_exp::AddAction> AddServer;

class ServerNode : public NodeBase
{
public:
        ServerNode(int Argc, char** Argv, const char* NodeName)
            : NodeBase(Argc, Argv, NodeName), Server(*mpNodeHandle, "AddNumber", boost::bind(&CallBack, _1, _2, this), false)
        {
            // Server(*mpNodeHandle, "AddNumber", boost::bind(&CallBack, _1, _2, this), false);
        }

        ~ServerNode();

        void CallBack(const action_exp::AddGoalConstPtr &goal, AddServer* server)
        {
            size_t num = goal->target;
            action_exp::AddFeedback FeedBack;

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
            Server.start();
            

            ros::spin();
        }

private:

        AddServer Server;

};

int main(int argc, char** argv)
{
    ServerNode node(argc, argv, "AerverNode");

    node.Run();
    
    return 0;
}