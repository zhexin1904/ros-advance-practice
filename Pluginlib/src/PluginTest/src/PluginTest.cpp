#include "pluginlib/class_list_macros.h"
#include "PluginTest/PluginTest.h"
#include <cmath>

#define CONST_PI 3.141592654f

// register the plugins
PLUGINLIB_EXPORT_CLASS(PluginDerive::Circle, PluginBase::BasePolygon);
PLUGINLIB_EXPORT_CLASS(PluginDerive::Square, PluginBase::BasePolygon);


void PluginDerive::Circle::GetParam(double Radius)
{
    PluginDerive::Circle::mRadius = Radius;
}

double PluginDerive::Circle::GetArea()
{
    return pow(PluginDerive::Circle::mRadius, 2)*CONST_PI;
}

void PluginDerive::Square::GetParam(double Length)
{
    PluginDerive::Square::mLength = Length;
}

double PluginDerive::Square::GetArea()
{
    return pow(PluginDerive::Square::mLength, 2);
}