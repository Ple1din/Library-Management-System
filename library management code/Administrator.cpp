#include "Administrator.h"
#include <iostream>

Administrator::Administrator(std::string name) : User(name) {}

std::string Administrator::addBook(std::vector<Book> books, Book book) {
    books.push_back(book);
    return book.getTitle() + " added to the library by " + name;
}

std::string Administrator::removeBook(std::vector<Book> books, std::string isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            std::string msg = it->getTitle() + " removed by " + name;
            books.erase(it);
            return msg;
        }
    }
    return "Book with ISBN " + isbn + " not found.";
}
