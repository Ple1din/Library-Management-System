#include "Book.h"

Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn), available(true) {}

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
