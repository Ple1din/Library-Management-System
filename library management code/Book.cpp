#include "Book.h"

Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn), available(true) {}

void Book::setAuthor(std::string author) {
    this->author = author;
}

void Book::setTitle(std::string title) {
    this->title = title;
}


void Book::setIsbn(std::string isbn) {
    this->isbn = isbn;
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

std::string Book::getISBN() {
    return isbn;
}

bool Book::isAvailable() {
    return available;
}

void Book::setAvailable(bool available) {
    this->available = available;
}
