// Generated by commsdsl2tools_qt v7.0.2

#include "Protocol_CC_MQTT_v3_1_1.h"

#include "cc_tools_qt_plugin/Message/cc_mqtt311/frame/Frame.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace plugin
{

Protocol_CC_MQTT_v3_1_1::Protocol_CC_MQTT_v3_1_1() :
    Base(std::make_unique<cc_tools_qt_plugin::Message::cc_mqtt311::frame::Frame>())
{
}

Protocol_CC_MQTT_v3_1_1::~Protocol_CC_MQTT_v3_1_1() = default;

const QString& Protocol_CC_MQTT_v3_1_1::nameImpl() const
{
        static const QString Str("CC MQTT v3.1.1");
        return Str;
}

} // namespace plugin

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
