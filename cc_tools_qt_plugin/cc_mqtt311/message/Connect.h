// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt311/message/Connect.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt311/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

class Connect : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt311::message::Connect<cc_tools_qt_plugin::cc_mqtt311::Message, cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>,
        Connect
    >
{
public:
    Connect();
    Connect(const Connect&) = delete;
    Connect(Connect&&) = delete;
    virtual ~Connect();
    Connect& operator=(const Connect&);
    Connect& operator=(Connect&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin