#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"
#include "Book.h"
#include <vector>

class Administrator : public User {
public:
    Administrator(std::string name);
    void addBook(std::vector<Book> books, Book book);
    void removeBook(std::vector<Book> books, std::string isbn);
};

#endif
