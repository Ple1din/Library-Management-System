#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& name);
    virtual ~User() = default;
    std::string getName() const;
    virtual std::string getUserType() const = 0;

protected:
    std::string name;
};

#endif
