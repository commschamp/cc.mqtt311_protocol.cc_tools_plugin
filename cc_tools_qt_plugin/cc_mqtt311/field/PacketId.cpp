// Generated by commsdsl2tools_qt v6.3.2

#include "PacketId.h"

#include "cc_mqtt311/field/PacketId.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace field
{

QVariantMap createProps_packetId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::field::PacketId<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
}

} // namespace field

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
