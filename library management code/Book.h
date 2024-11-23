#ifndef BOOK_H
#define BOOK_H

#include <string>

// The Book class represents a book in the library system, storing details like title, author, ISBN, and availability.
class Book {
public:
    // Constructor: Initializes a Book object with the provided title, author, and ISBN.
    // Parameters:
    // - title: The title of the book.
    // - author: The author of the book.
    // - isbn: The ISBN of the book.
    Book(std::string title, std::string author, std::string isbn);

    // Sets the title of the book.
    // Parameters:
    // - title: The new title for the book.
    void setTitle(std::string title);

    // Sets the author of the book.
    // Parameters:
    // - author: The new author for the book.
    void setAuthor(std::string author);

    // Sets the ISBN of the book.
    // Parameters:
    // - isbn: The new ISBN for the book.
    void setIsbn(std::string isbn);

    // Returns the title of the book.
    // Returns:
    // - The title of the book as a string.
    std::string getTitle();

    // Returns the author of the book.
    // Returns:
    // - The author of the book as a string.
    std::string getAuthor();

    // Returns the ISBN of the book.
    // Returns:
    // - The ISBN of the book as a string.
    std::string getISBN();

    // Checks if the book is available for loan.
    // Returns:
    // - true if the book is available, false otherwise.
    bool isAvailable();

    // Sets the availability status of the book.
    // Parameters:
    // - available: true if the book should be marked as available, false if it should be marked as unavailable.
    void setAvailable(bool available);

private:
    std::string title;   // The title of the book.
    std::string author;  // The author of the book.
    std::string isbn;    // The ISBN of the book.
    bool available;      // Availability status of the book (true = available, false = unavailable).
};

#endif
