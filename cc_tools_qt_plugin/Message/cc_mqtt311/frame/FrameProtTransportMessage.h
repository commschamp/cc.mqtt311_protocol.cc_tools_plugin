// Generated by commsdsl2tools_qt v7.0.2

#pragma once

#include <tuple>
#include "cc_mqtt311/frame/Frame.h"
#include "cc_tools_qt/ToolsTransportProtMessageBase.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt311
{

namespace frame
{

template <typename TOpt>
struct FrameProtTransportMessageFields
{
    using All =
        std::tuple<
            ::cc_mqtt311::field::IdAndFlagsField<TOpt>,
            typename ::cc_mqtt311::frame::FrameLayers<TOpt>::SizeMembers::Size,
            typename ::cc_mqtt311::frame::FrameLayers<TOpt>::Data::Field
        >;
};

template <typename TMsgBase, typename TOpt>
class FrameProtTransportMessage : public
    cc_tools_qt::ToolsTransportProtMessageBase<
        TMsgBase,
        typename FrameProtTransportMessageFields<TOpt>::All,
        FrameProtTransportMessage<TMsgBase, TOpt>
    >
{
    using Base =
        cc_tools_qt::ToolsTransportProtMessageBase<
            TMsgBase,
            typename FrameProtTransportMessageFields<TOpt>::All,
            FrameProtTransportMessage<TMsgBase, TOpt>
        >;
public:
    COMMS_MSG_FIELDS_NAMES(
        idAndFlags,
        size,
        data
    );
};

} // namespace frame

} // namespace cc_mqtt311

} // namespace Message

} // namespace cc_tools_qt_plugin
