// Generated by commsdsl2tools_qt v7.0.0

#pragma once

#include "cc_tools_qt/ToolsProtocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace plugin
{

class Protocol_CC_MQTT_v3_1_1 : public cc_tools_qt::ToolsProtocol
{
    using Base = cc_tools_qt::ToolsProtocol;
public:
    Protocol_CC_MQTT_v3_1_1();
    virtual ~Protocol_CC_MQTT_v3_1_1();

protected:
    virtual const QString& nameImpl() const override;
};

} // namespace plugin

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
