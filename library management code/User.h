#ifndef USER_H
#define USER_H

#include <string>

// The User class represents a general user in the system.
// It is the base class for other user types (e.g., Reader, Administrator).
class User {
public:
    // Constructor for the User class.
    // Parameters:
    // - name: The name of the user.
    User(std::string name);

    // Sets the name of the user.
    // Parameters:
    // - name: The new name for the user.
    void setName(std::string name);

    // Gets the name of the user.
    // Returns:
    // - The name of the user as a string.
    std::string getName();

protected:
    std::string name;  // The name of the user.
};

#endif
