#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>

// The Library class manages a collection of books, allowing books to be added, removed, and listed.
class Library {
public:
    // Adds a new book to the library.
    // Parameters:
    // - book: The Book object to be added to the library.
    void addBook(Book book);

    // Removes a book from the library using its ISBN.
    // Parameters:
    // - isbn: The ISBN of the book to be removed.
    void removeBook(std::string isbn);

    // Lists all books in the library as a string, including their title, author, ISBN, and availability status.
    // Returns:
    // - A vector of strings, each representing the details of a book.
    std::vector<std::string> listBooks();

    // Provides access to the list of books in the library.
    // Returns:
    // - A reference to the vector of Book objects in the library.
    std::vector<Book>& getBooks();

private:
    std::vector<Book> books;  // The collection of books stored in the library.
};

#endif
