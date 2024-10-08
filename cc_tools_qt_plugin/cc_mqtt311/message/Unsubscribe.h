// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt311/message/Unsubscribe.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt311/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

class Unsubscribe : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt311::message::Unsubscribe<cc_tools_qt_plugin::cc_mqtt311::Message, cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>,
        Unsubscribe
    >
{
public:
    Unsubscribe();
    Unsubscribe(const Unsubscribe&) = delete;
    Unsubscribe(Unsubscribe&&) = delete;
    virtual ~Unsubscribe();
    Unsubscribe& operator=(const Unsubscribe&);
    Unsubscribe& operator=(Unsubscribe&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
