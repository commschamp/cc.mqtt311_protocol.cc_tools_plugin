// Generated by commsdsl2tools_qt v6.3.0

#include "cc_mqtt311/MsgId.h"
#include "cc_tools_qt_plugin/cc_mqtt311/factory/AllMessagesDynMemMsgFactory.h"
#include "cc_tools_qt_plugin/cc_mqtt311/input/AllMessages.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace factory
{

AllMessagesDynMemMsgFactory::MsgPtr AllMessagesDynMemMsgFactory::createMsg(MsgIdParamType id, unsigned idx, CreateFailureReason* reason) const
{
    auto updateReasonFunc =
        [reason](CreateFailureReason val)
        {
            if (reason != nullptr) {
                *reason = val;
            }
        };

    if (1U <= idx) {
        updateReasonFunc(CreateFailureReason::InvalidId);
        return MsgPtr();
    }

    updateReasonFunc(CreateFailureReason::None);
    switch (id) {
        case ::cc_mqtt311::MsgId_Connect: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Connect);
        case ::cc_mqtt311::MsgId_Connack: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Connack);
        case ::cc_mqtt311::MsgId_Publish: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Publish);
        case ::cc_mqtt311::MsgId_Puback: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Puback);
        case ::cc_mqtt311::MsgId_Pubrec: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Pubrec);
        case ::cc_mqtt311::MsgId_Pubrel: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Pubrel);
        case ::cc_mqtt311::MsgId_Pubcomp: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Pubcomp);
        case ::cc_mqtt311::MsgId_Subscribe: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Subscribe);
        case ::cc_mqtt311::MsgId_Suback: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Suback);
        case ::cc_mqtt311::MsgId_Unsubscribe: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Unsubscribe);
        case ::cc_mqtt311::MsgId_Unsuback: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Unsuback);
        case ::cc_mqtt311::MsgId_Pingreq: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Pingreq);
        case ::cc_mqtt311::MsgId_Pingresp: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Pingresp);
        case ::cc_mqtt311::MsgId_Disconnect: return MsgPtr(new cc_tools_qt_plugin::cc_mqtt311::message::Disconnect);
        default: break;
    }

    updateReasonFunc(CreateFailureReason::InvalidId);
    return MsgPtr();
}

std::size_t AllMessagesDynMemMsgFactory::msgCount(MsgIdParamType id) const
{
    switch (id)
    {
        case ::cc_mqtt311::MsgId_Connect: return 1U;
        case ::cc_mqtt311::MsgId_Connack: return 1U;
        case ::cc_mqtt311::MsgId_Publish: return 1U;
        case ::cc_mqtt311::MsgId_Puback: return 1U;
        case ::cc_mqtt311::MsgId_Pubrec: return 1U;
        case ::cc_mqtt311::MsgId_Pubrel: return 1U;
        case ::cc_mqtt311::MsgId_Pubcomp: return 1U;
        case ::cc_mqtt311::MsgId_Subscribe: return 1U;
        case ::cc_mqtt311::MsgId_Suback: return 1U;
        case ::cc_mqtt311::MsgId_Unsubscribe: return 1U;
        case ::cc_mqtt311::MsgId_Unsuback: return 1U;
        case ::cc_mqtt311::MsgId_Pingreq: return 1U;
        case ::cc_mqtt311::MsgId_Pingresp: return 1U;
        case ::cc_mqtt311::MsgId_Disconnect: return 1U;
        default: break;
    }

    return 0U;
}

} // namespace factory

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
