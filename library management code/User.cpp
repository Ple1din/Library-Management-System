#include "User.h"

User::User(std::string name) : name(name) {}

std::string User::getName() {
    return name;
}
