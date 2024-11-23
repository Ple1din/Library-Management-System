#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "User.h"
#include "Book.h"
#include <vector>

// The Administrator class represents a user with administrative privileges
// to manage the library's collection of books and other administrative tasks.
class Administrator : public User {
public:
    // Constructor: Initializes an Administrator object with a given name.
    Administrator(std::string name);

    // Adds a book to the library collection.
    // Parameters:
    // - books: A reference to the vector of Book objects representing the library's collection.
    // - book: The Book object to be added.
    // Returns:
    // - A string message indicating the book was successfully added.
    std::string addBook(std::vector<Book> books, Book book);

    // Removes a book from the library collection using its ISBN.
    // Parameters:
    // - books: A reference to the vector of Book objects representing the library's collection.
    // - isbn: The ISBN of the book to be removed.
    // Returns:
    // - A string message indicating success or failure to find the book.
    std::string removeBook(std::vector<Book> books, std::string isbn);
};

#endif
