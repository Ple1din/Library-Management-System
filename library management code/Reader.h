#ifndef READER_H
#define READER_H

#include "User.h"
#include "Book.h"

class Reader : public User {
public:
    Reader(std::string name);
    void requestBook(Book book);
    void returnBook(Book book);
};

#endif
