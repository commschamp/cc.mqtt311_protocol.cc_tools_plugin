// Generated by commsdsl2tools_qt v7.0.0

#include "Pubrel.h"

#include "cc_mqtt311/message/Pubrel.h"
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

class PubrelImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt311::Message,
        ::cc_mqtt311::message::Pubrel,
        PubrelImpl
    >
{
public:
    PubrelImpl() = default;
    PubrelImpl(const PubrelImpl&) = default;
    PubrelImpl(PubrelImpl&&) = default;
    virtual ~PubrelImpl() = default;
    PubrelImpl& operator=(const PubrelImpl&) = default;
    PubrelImpl& operator=(PubrelImpl&&) = default;
};

Pubrel::Pubrel() : m_pImpl(new PubrelImpl) {}
Pubrel::~Pubrel() = default;

Pubrel& Pubrel::operator=(const Pubrel& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Pubrel& Pubrel::operator=(Pubrel&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Pubrel::nameImpl() const
{
    return m_pImpl->name();
}

bool Pubrel::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Pubrel::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Pubrel::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Pubrel::resetImpl()
{
    m_pImpl->reset();
}

bool Pubrel::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Pubrel*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Pubrel::isValidImpl() const
{
    return m_pImpl->isValid();
}

Pubrel::DataSeq Pubrel::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Pubrel::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Pubrel::Ptr Pubrel::cloneImpl() const
{
    ImplPtr impl(static_cast<PubrelImpl*>(m_pImpl->clone().release()));
    return Ptr(new Pubrel(std::move(impl)));
}

void Pubrel::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Pubrel::DataSeq Pubrel::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Pubrel::FieldsList Pubrel::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Pubrel::FieldsList Pubrel::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Pubrel::Pubrel(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt311

} // namespace Message

} // namespace cc_tools_qt_plugin
