#include "Library.h"
#include <iostream>

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::removeBook(std::string isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            books.erase(it);
            return;
        }
    }
}

void Library::listBooks() {
    for (int i = 0; i < books.size(); i++) {
        Book book = books[i];
        std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor()
                  << ", ISBN: " << book.getISBN() << ", Available: "
                  << (book.isAvailable() ? "Yes" : "No") << std::endl;
    }
}

std::vector<Book> Library::getBooks() {
    return books;
}
