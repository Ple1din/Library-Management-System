#include "Library.h"
#include "Reader.h"
#include "Administrator.h"
#include <iostream>

int main() {
    Library library;
    Administrator admin("Admin1");
    Reader reader("Reader1");

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "12345");
    Book book2("1984", "George Orwell", "67890");

    admin.addBook(library.getBooks(), book1);
    admin.addBook(library.getBooks(), book2);

    std::cout << "\nList of books in the library:\n";
    library.listBooks();

    std::cout << "\nReader requests a book:\n";
    reader.requestBook(book1);

    std::cout << "\nList of books after request:\n";
    library.listBooks();

    std::cout << "\nReader returns the book:\n";
    reader.returnBook(book1);

    std::cout << "\nFinal list of books:\n";
    library.listBooks();

    return 0;
}
