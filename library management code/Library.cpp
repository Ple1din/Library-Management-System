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

std::vector<std::string> Library::listBooks() {
    std::vector<std::string> bookDetails;
    for ( auto book : books) {
        bookDetails.push_back("Title: " + book.getTitle() + ", Author: " + book.getAuthor() +
                              ", ISBN: " + book.getISBN() + ", Available: " +
                              (book.isAvailable() ? "Yes" : "No"));
    }
    return bookDetails;
}

std::vector<Book>& Library::getBooks() {
    return books;
}
