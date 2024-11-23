#include "Reader.h"
#include <iostream>

Reader::Reader(std::string name) : User(name) {}

std::string Reader::requestBook(Book book) {
    if (book.isAvailable()) {
        book.setAvailable(false);
        return name + " borrowed " + book.getTitle();
    }
    return book.getTitle() + " is not available.";
}

std::string Reader::returnBook(Book book) {
    book.setAvailable(true);
    return name + " returned " + book.getTitle();
}
