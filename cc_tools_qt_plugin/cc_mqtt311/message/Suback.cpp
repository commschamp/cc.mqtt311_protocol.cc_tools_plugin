// Generated by commsdsl2tools_qt v6.3.0

#include "Suback.h"

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
    using Field = ::cc_mqtt311::message::SubackFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    static QVariantMap createProps_returnCode(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqtt311::message::SubackFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::ListMembers::ReturnCode;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Max QoS 0", 0)
                .add("Max QoS 1", 1)
                .add("Max QoS 2", 2)
                .add("Failure", 128)
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::SubackFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_returnCode(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

Suback::Suback() = default;
Suback::~Suback() = default;
Suback& Suback::operator=(const Suback&) = default;
Suback& Suback::operator=(Suback&&) = default;

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin