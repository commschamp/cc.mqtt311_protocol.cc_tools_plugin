// Generated by commsdsl2tools_qt v6.3.0

#include "Disconnect.h"

#include "cc_tools_qt/property/field.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt311
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

Disconnect::Disconnect() = default;
Disconnect::~Disconnect() = default;
Disconnect& Disconnect::operator=(const Disconnect&) = default;
Disconnect& Disconnect::operator=(Disconnect&&) = default;

const QVariantList& Disconnect::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
