// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include "cc_mqtt311/frame/Frame.h"
#include "cc_tools_qt_plugin/cc_mqtt311/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt311/Version.h"
#include "cc_tools_qt_plugin/cc_mqtt311/input/AllMessages.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/MsgFactoryFrameOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace frame
{

using Frame =
    ::cc_mqtt311::frame::Frame<
        cc_tools_qt_plugin::cc_mqtt311::Message,
        cc_tools_qt_plugin::cc_mqtt311::input::AllMessages,
        cc_tools_qt_plugin::cc_mqtt311::options::MsgFactoryFrameOptions
    >;

} // namespace frame

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
