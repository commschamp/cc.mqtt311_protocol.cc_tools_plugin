// Generated by commsdsl2tools_qt v6.3.3

#include "Message.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/Qos.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace
{

struct FlagsMembers
{
    static QVariantMap createProps_retain(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqtt311::MessageFields::FlagsMembers::Retain;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "retain")
                .asMap();
    }

    static QVariantMap createProps_qos(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqtt311::MessageFields::FlagsMembers::Qos;
        auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_qos(Field::name(), serHidden);
        return props;
    }

    static QVariantMap createProps_dup(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqtt311::MessageFields::FlagsMembers::Dup;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "dup")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::MessageFields::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_retain(true))
            .add(FlagsMembers::createProps_qos(true))
            .add(FlagsMembers::createProps_dup(true))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags(true));
    return props;
}

} // namespace 

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
