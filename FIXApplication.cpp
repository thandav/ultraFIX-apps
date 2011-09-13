#include "FIXApplication.h"

void FIXApplication::onLogon(const FIX::SessionID& sessionId)
{
  std::cout << "Logon - " << sessionId << std::endl;
}

void FIXApplication::onLogout(const FIX::SessionID& sessionId)
{
  std::cout << "Logout - " << sessionId << std::endl;
}

void FIXApplication::toAdmin(FIX::Message& message, const FIX::SessionID& sessionId)
{
  std::cout << "ToAdmin - " << message << std::endl;
}

void FIXApplication::fromAdmin(const FIX::Message& message, const FIX::SessionID& sessionId) throw(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::RejectLogon)
{
  std::cout << "FromAdmin - " << message << std::endl;
}

void FIXApplication::toApp(FIX::Message& message, const FIX::SessionID& sessionId)
throw(FIX::DoNotSend)
{
  std::cout << "ToApp - " << message << std::endl;
}

void FIXApplication::fromApp(const FIX::Message& message, const FIX::SessionID& sessionId) throw(FIX::FieldNotFound, FIX::IncorrectDataFormat, FIX::IncorrectTagValue, FIX::UnsupportedMessageType)
{
  std::cout << "FromApp - " << message << std::endl;
}


