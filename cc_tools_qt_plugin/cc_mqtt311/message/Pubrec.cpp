// Generated by commsdsl2tools_qt v6.3.0

#include "Pubrec.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

namespace
{

static QVariantMap createProps_packetId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::PubrecFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId(false));
    return props;
}

} // namespace

Pubrec::Pubrec() = default;
Pubrec::~Pubrec() = default;
Pubrec& Pubrec::operator=(const Pubrec&) = default;
Pubrec& Pubrec::operator=(Pubrec&&) = default;

const QVariantList& Pubrec::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
