// Generated by commsdsl2tools_qt v6.3.3

#pragma once

#include <tuple>
#include "cc_tools_qt_plugin/cc_mqtt311/message/Connack.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Connect.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Disconnect.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Pingreq.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Pingresp.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Puback.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Pubcomp.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Publish.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Pubrec.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Pubrel.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Suback.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Subscribe.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Unsuback.h"
#include "cc_tools_qt_plugin/cc_mqtt311/message/Unsubscribe.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace input
{

using AllMessages =
    std::tuple<
        cc_tools_qt_plugin::cc_mqtt311::message::Connect,
        cc_tools_qt_plugin::cc_mqtt311::message::Connack,
        cc_tools_qt_plugin::cc_mqtt311::message::Publish,
        cc_tools_qt_plugin::cc_mqtt311::message::Puback,
        cc_tools_qt_plugin::cc_mqtt311::message::Pubrec,
        cc_tools_qt_plugin::cc_mqtt311::message::Pubrel,
        cc_tools_qt_plugin::cc_mqtt311::message::Pubcomp,
        cc_tools_qt_plugin::cc_mqtt311::message::Subscribe,
        cc_tools_qt_plugin::cc_mqtt311::message::Suback,
        cc_tools_qt_plugin::cc_mqtt311::message::Unsubscribe,
        cc_tools_qt_plugin::cc_mqtt311::message::Unsuback,
        cc_tools_qt_plugin::cc_mqtt311::message::Pingreq,
        cc_tools_qt_plugin::cc_mqtt311::message::Pingresp,
        cc_tools_qt_plugin::cc_mqtt311::message::Disconnect
    >;

} // namespace input

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
