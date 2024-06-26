// Generated by commsdsl2tools_qt v6.3.3

#pragma once

#include <memory>
#include "cc_tools_qt_plugin/cc_mqtt311/Message.h"
#include "comms/MsgFactoryCreateFailureReason.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace factory
{

class AllMessagesDynMemMsgFactory
{
public:
    using Message = cc_tools_qt_plugin::cc_mqtt311::Message;
    using MsgIdParamType = typename Message::MsgIdParamType;
    using MsgIdType = typename Message::MsgIdType;
    using MsgPtr = std::unique_ptr<Message>;
    using CreateFailureReason = comms::MsgFactoryCreateFailureReason;
    using GenericMessage = void;

    MsgPtr createMsg(MsgIdParamType id, unsigned idx = 0U, CreateFailureReason* reason = nullptr) const;
    std::size_t msgCount(MsgIdParamType id) const;

    MsgPtr createGenericMsg(MsgIdParamType id, unsigned idx = 0U) const
    {
        static_cast<void>(id);
        static_cast<void>(idx);
        return MsgPtr();
    }

    bool canAllocate() const
    {
        return true;
    }

    static constexpr bool hasUniqueIds()
    {
        return true;
    }

    static constexpr bool isDispatchPolymorphic()
    {
        return false;
    }

    static constexpr bool isDispatchStaticBinSearch()
    {
        return false;
    }

    static constexpr bool isDispatchLinearSwitch()
    {
        return false;
    }

    static constexpr bool hasInPlaceAllocation()
    {
        return false;
    }

    static constexpr bool hasGenericMessageSupport()
    {
        return false;
    }

    static constexpr bool hasForcedDispatch()
    {
        return true;
    }
};

} // namespace factory

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
