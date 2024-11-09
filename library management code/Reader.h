#ifndef READER_HPP
#define READER_HPP

#include "User.h"
#include "Book.h"

class Reader : public User {
public:
    Reader(const std::string& name);
    std::string getUserType() const override;
    void requestBook(Book& book);
    void returnBook(Book& book);
};

#endif
