// Generated by commsdsl2tools_qt v7.0.2

#pragma once

#include "cc_tools_qt/ToolsMsgFactory.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt311
{

namespace factory
{

class MsgFactory : public cc_tools_qt::ToolsMsgFactory
{
public:
    MsgFactory();
    virtual ~MsgFactory();

protected:
    virtual MessagesListInternal createAllMessagesImpl() override;
};

} // namespace factory

} // namespace cc_mqtt311

} // namespace Message

} // namespace cc_tools_qt_plugin
