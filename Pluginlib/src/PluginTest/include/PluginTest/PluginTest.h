#ifndef __PLUGIN_TEST_H__
#define __PLUGIN_TEST_H__
#include<PluginTest/PluginBase.h>

namespace PluginDerive
{
class Circle : public PluginBase::BasePolygon
{
    
public:
    void GetParam(double Radius);
    double GetArea();

    Circle();
    ~Circle();

private:
    double mRadius;
};

class Square : public PluginBase::BasePolygon
{
public:

    void GetParam(double Length);
    double GetArea();

    Square();
    ~Square();

    
private:
    double mLength;
    
};












}




#endif