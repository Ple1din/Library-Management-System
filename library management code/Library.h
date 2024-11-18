#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>

class Library {
public:
    void addBook(Book book);
    void removeBook(std::string isbn);
    void listBooks();
    std::vector<Book> getBooks();

private:
    std::vector<Book> books;
};

#endif
