// Generated by commsdsl2tools_qt v6.3.4

#include "Pingreq.h"

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

Pingreq::Pingreq() = default;
Pingreq::~Pingreq() = default;
Pingreq& Pingreq::operator=(const Pingreq&) = default;
Pingreq& Pingreq::operator=(Pingreq&&) = default;

const QVariantList& Pingreq::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt311

} // namespace cc_tools_qt_plugin
