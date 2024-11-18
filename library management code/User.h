#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(std::string name);
    std::string getName();

protected:
    std::string name;
};

#endif
