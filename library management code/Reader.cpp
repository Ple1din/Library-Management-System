#include "Reader.h"
#include <iostream>

Reader::Reader(std::string name) : User(name) {}

void Reader::requestBook(Book book) {
    if (book.isAvailable()) {
        book.setAvailable(false);
        std::cout << name << " borrowed " << book.getTitle() << std::endl;
    } else {
        std::cout << book.getTitle() << " is not available." << std::endl;
    }
}

void Reader::returnBook(Book book) {
    book.setAvailable(true);
    std::cout << name << " returned " << book.getTitle() << std::endl;
}
