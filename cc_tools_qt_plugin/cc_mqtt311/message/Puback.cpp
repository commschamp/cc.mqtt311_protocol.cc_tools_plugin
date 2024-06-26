// Generated by commsdsl2tools_qt v6.3.3

#include "Puback.h"

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
    using Field = ::cc_mqtt311::message::PubackFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::PacketId;
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

Puback::Puback() = default;
Puback::~Puback() = default;
Puback& Puback::operator=(const Puback&) = default;
Puback& Puback::operator=(Puback&&) = default;

const QVariantList& Puback::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
