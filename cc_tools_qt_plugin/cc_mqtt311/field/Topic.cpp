// Generated by commsdsl2tools_qt v6.3.3

#include "Topic.h"

#include "cc_mqtt311/field/Topic.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt311/field/String.h"
#include "cc_tools_qt_plugin/cc_mqtt311/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace field
{

QVariantMap createProps_topic(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt311::field::Topic<cc_tools_qt_plugin::cc_mqtt311::options::DefaultOptions>;
    auto props = cc_tools_qt_plugin::cc_mqtt311::field::createProps_string(name, serHidden);
    return props;
}

} // namespace field

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
