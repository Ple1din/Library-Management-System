#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(std::string title, std::string author, std::string isbn);
    std::string getTitle();
    std::string getAuthor();
    std::string getISBN();
    bool isAvailable();
    void setAvailable(bool available);

private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;
};

#endif
