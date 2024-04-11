// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt311/message/Pubcomp.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt311/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

class Pubcomp : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt311::message::Pubcomp<cc_tools_qt_plugin::cc_mqtt311::Message, cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>,
        Pubcomp
    >
{
public:
    Pubcomp();
    Pubcomp(const Pubcomp&) = delete;
    Pubcomp(Pubcomp&&) = delete;
    virtual ~Pubcomp();
    Pubcomp& operator=(const Pubcomp&);
    Pubcomp& operator=(Pubcomp&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
