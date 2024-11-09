#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"
#include "Book.h"
#include <vector>

class Administrator : public User {
public:
    Administrator(const std::string& name);
    std::string getUserType() const override;
    void addBook(std::vector<Book>& books, const Book& book);
    void removeBook(std::vector<Book>& books, const std::string& isbn);
};

#endif
