#ifndef __NODE_BASE_H__
#define __NODE_BASE_H__

#include <ros/ros.h>

class NodeBase
{
public:

    NodeBase(int Argc, char** Argv, const char* NodeName)
    {
        ros::init(Argc, Argv, NodeName);
        mpNodeHandle.reset(new ros::NodeHandle());
    }


    ~NodeBase();

    virtual void Run(void) = 0;

// protected:


    std::unique_ptr<ros::NodeHandle> mpNodeHandle;

};


















#endif
