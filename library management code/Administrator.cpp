#include "Administrator.h"
#include <iostream>

Administrator::Administrator(std::string name) : User(name) {}

void Administrator::addBook(std::vector<Book> books, Book book) {
    books.push_back(book);
    std::cout << book.getTitle() << " added to the library by " << name << std::endl;
}

void Administrator::removeBook(std::vector<Book> books, std::string isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            std::cout << it->getTitle() << " removed by " << name << std::endl;
            books.erase(it);
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found." << std::endl;
}
