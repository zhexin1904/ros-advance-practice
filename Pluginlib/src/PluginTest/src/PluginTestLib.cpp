#include <pluginlib/class_list_macros.h>
#include "PluginTest/PluginTest.hpp"
#include "PluginTest/PluginBase.hpp"
// register the plugins
PLUGINLIB_EXPORT_CLASS(PluginDerive::Circle, PluginBase::BasePolygon);
PLUGINLIB_EXPORT_CLASS(PluginDerive::Square, PluginBase::BasePolygon);