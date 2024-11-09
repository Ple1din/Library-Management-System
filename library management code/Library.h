#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.h"
#include "Reader.h"
#include "Administrator.h"
#include <vector>

class Library {
public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    void listBooks() const;
    std::vector<Book>& getBooks();

private:
    std::vector<Book> books;
};

#endif
