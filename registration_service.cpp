#include "registration_service.hpp"

RegistrationService::RegistrationService(EmailService* service) : service(service) {
}

bool RegistrationService::registerUser(const std::string& name, const std::string& email) {
  return service->sendEmail(email, "Welcome", "Hello " + name);
}
