// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt311/message/Unsuback.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt311/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

class Unsuback : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt311::message::Unsuback<cc_tools_qt_plugin::cc_mqtt311::Message, cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>,
        Unsuback
    >
{
public:
    Unsuback();
    Unsuback(const Unsuback&) = delete;
    Unsuback(Unsuback&&) = delete;
    virtual ~Unsuback();
    Unsuback& operator=(const Unsuback&);
    Unsuback& operator=(Unsuback&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
