#ifndef READER_H
#define READER_H

#include "User.h"
#include "Book.h"

// The Reader class represents a user who can request and return books in the library.
// It inherits from the User class and adds specific functionalities for managing book loans.
class Reader : public User {
public:
    // Constructor for the Reader class.
    // Parameters:
    // - name: The name of the reader.
    Reader(std::string name);

    // Allows the reader to request a book from the library.
    // Parameters:
    // - book: The Book object that the reader wants to borrow.
    // Returns:
    // - A string indicating whether the book is available for borrowing or not.
    std::string requestBook(Book book);

    // Allows the reader to return a book to the library.
    // Parameters:
    // - book: The Book object that the reader is returning.
    // Returns:
    // - A string indicating the result of the return operation.
    std::string returnBook(Book book);
};

#endif
