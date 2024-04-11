// Generated by commsdsl2tools_qt v6.3.2

#include "MsgId.h"

#include "cc_mqtt311/field/MsgId.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace field
{

QVariantMap createProps_msgId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::field::MsgId<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("CONNECT", 1)
            .add("CONNACK", 2)
            .add("PUBLISH", 3)
            .add("PUBACK", 4)
            .add("PUBREC", 5)
            .add("PUBREL", 6)
            .add("PUBCOMP", 7)
            .add("SUBSCRIBE", 8)
            .add("SUBACK", 9)
            .add("UNSUBSCRIBE", 10)
            .add("UNSUBACK", 11)
            .add("PINGREQ", 12)
            .add("PINGRESP", 13)
            .add("DISCONNECT", 14)
            .asMap();
}

} // namespace field

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
