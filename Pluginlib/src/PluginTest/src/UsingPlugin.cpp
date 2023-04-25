#include "PluginTest/PluginBase.hpp"
#include "PluginTest/PluginTest.hpp"
#include "pluginlib/class_loader.h"
int main(int argc, char  **argv)
{
    if (argc != 3)
    {
        std::cout << "usage: UsingPlugin Radius Length" << std::endl;
        return 1; 
    }
    double Radius = atoi(argv[1]);
    double Length = atoi(argv[2]);
    
    pluginlib::ClassLoader<PluginBase::BasePolygon> PluginLoader("PluginTest", "PluginBase::BasePolygon");
    
    boost::shared_ptr<PluginBase::BasePolygon> PluginCircle = PluginLoader.createInstance("PluginDerive::Circle");

    boost::shared_ptr<PluginBase::BasePolygon> PluginSquare = PluginLoader.createInstance("PluginDerive::Square");

    PluginCircle->GetParam(Radius);
    PluginSquare->GetParam(Length);

    std::cout << "Area of Circle is :" << PluginCircle->GetArea() << std::endl;
    std::cout << "Area of Square is :" << PluginSquare->GetArea() << std::endl;


    return 0;
}
