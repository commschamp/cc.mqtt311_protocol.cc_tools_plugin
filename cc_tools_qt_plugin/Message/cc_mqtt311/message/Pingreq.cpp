// Generated by commsdsl2tools_qt v7.0.3

#include "Pingreq.h"

#include "cc_mqtt311/message/Pingreq.h"
#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_mqtt311/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt311
{

namespace message
{

class PingreqImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt311::Message,
        ::cc_mqtt311::message::Pingreq,
        PingreqImpl
    >
{
public:
    PingreqImpl() = default;
    PingreqImpl(const PingreqImpl&) = default;
    PingreqImpl(PingreqImpl&&) = default;
    virtual ~PingreqImpl() = default;
    PingreqImpl& operator=(const PingreqImpl&) = default;
    PingreqImpl& operator=(PingreqImpl&&) = default;
};

Pingreq::Pingreq() : m_pImpl(new PingreqImpl) {}
Pingreq::~Pingreq() = default;

Pingreq& Pingreq::operator=(const Pingreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pingreq& Pingreq::operator=(Pingreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Pingreq::nameImpl() const
{
    return m_pImpl->name();
}

bool Pingreq::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Pingreq::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Pingreq::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Pingreq::resetImpl()
{
    m_pImpl->reset();
}

bool Pingreq::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Pingreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Pingreq::isValidImpl() const
{
    return m_pImpl->isValid();
}

Pingreq::DataSeq Pingreq::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Pingreq::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Pingreq::Ptr Pingreq::cloneImpl() const
{
    ImplPtr impl(static_cast<PingreqImpl*>(m_pImpl->clone().release()));
    return Ptr(new Pingreq(std::move(impl)));
}

void Pingreq::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Pingreq::DataSeq Pingreq::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Pingreq::FieldsList Pingreq::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Pingreq::FieldsList Pingreq::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Pingreq::Pingreq(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt311

} // namespace Message

} // namespace cc_tools_qt_plugin
