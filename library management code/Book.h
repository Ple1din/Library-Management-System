#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author, const std::string& isbn);
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool isAvailable() const;
    void setAvailable(bool available);

private:
    std::string title;
    std::string author;
    std::string isbn;
    bool available;
};

#endif
