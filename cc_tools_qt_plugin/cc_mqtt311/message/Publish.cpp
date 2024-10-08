// Generated by commsdsl2tools_qt v6.3.4

#include "Publish.h"

#include "cc_mqtt311/field/PacketId.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/Topic.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

namespace
{

static QVariantMap createProps_topic(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::PublishFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::Topic;
    auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_topic(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_packetId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::PublishFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::PacketId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(cc_tools_qt_plugin::cc_mqtt311::field::createProps_packetId("Packet ID", serHidden))
            .asMap();
}

static QVariantMap createProps_payload(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::PublishFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::Payload;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_topic(false));
    props.append(createProps_packetId(false));
    props.append(createProps_payload(false));
    return props;
}

} // namespace

Publish::Publish() = default;
Publish::~Publish() = default;
Publish& Publish::operator=(const Publish&) = default;
Publish& Publish::operator=(Publish&&) = default;

const QVariantList& Publish::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
