// Generated by commsdsl2tools_qt v6.3.0

#include "Subscribe.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/Qos.h"
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

static QVariantMap createProps_packetId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_topic(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_mqtt311::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::ListMembers::ElementMembers::Topic;
            auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_topic(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_qos(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_mqtt311::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::ListMembers::ElementMembers::Qos;
            auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_qos(Field::name(), serHidden);
            return props;
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqtt311::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_topic(serHidden))
                .add(ElementMembers::createProps_qos(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
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

Subscribe::Subscribe() = default;
Subscribe::~Subscribe() = default;
Subscribe& Subscribe::operator=(const Subscribe&) = default;
Subscribe& Subscribe::operator=(Subscribe&&) = default;

const QVariantList& Subscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
