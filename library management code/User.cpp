#include "User.h"

User::User(std::string name) : name(name) {}

void User::setName(std::string name) {
    this->name = name;
}

std::string User::getName() {
    return name;
}
