#include "Library.h"
#include "Reader.h"
#include "Administrator.h"
#include <iostream>

void displayMenu() {
    std::cout << "\n=== Library Menu ===\n";
    std::cout << "1. View all books\n";
    std::cout << "2. Search book by ISBN\n";
    std::cout << "3. Administrator actions\n";
    std::cout << "4. Reader actions\n";
    std::cout << "5. Exit\n";
    std::cout << "Select an option: ";
}

void displayBooks( std::vector<std::string> books) {
    if (books.empty()) {
        std::cout << "No books in the library.\n";
        return;
    }
    for ( auto bookDetails : books) {
        std::cout << bookDetails << "\n";
    }
}

int main() {
    Library library;
    Administrator admin("Admin1");
    Reader reader("Reader1");

    int option;
    do {
        displayMenu();
        std::cin >> option;

        switch (option) {
            case 1: { // View all books
                auto books = library.listBooks();
                std::cout << "\nBooks in Library:\n";
                displayBooks(books);
                break;
            }
            case 2: { // Search book by ISBN
                std::string isbn;
                std::cout << "Enter ISBN to search: ";
                std::cin >> isbn;
                bool found = false;
                for ( auto book : library.getBooks()) {
                    if (book.getISBN() == isbn) {
                        std::cout << "Title: " << book.getTitle()
                                  << ", Author: " << book.getAuthor()
                                  << ", Available: " << (book.isAvailable() ? "Yes" : "No") << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Book with ISBN " << isbn << " not found.\n";
                }
                break;
            }
            case 3: { // Administrator actions
                int adminOption;
                std::cout << "\n=== Administrator Menu ===\n";
                std::cout << "1. Add book\n";
                std::cout << "2. Remove book\n";
                std::cout << "Select an option: ";
                std::cin >> adminOption;

                if (adminOption == 1) { // Add book
                    std::string title, author, isbn;
                    std::cout << "Enter title: ";
                    std::cin.ignore(); // Clear newline from input buffer
                    std::getline(std::cin, title);
                    std::cout << "Enter author: ";
                    std::getline(std::cin, author);
                    std::cout << "Enter ISBN: ";
                    std::cin >> isbn;
                    Book newBook(title, author, isbn);
                    library.addBook(newBook);
                    std::cout << admin.addBook(library.getBooks(), newBook) << "\n";
                } else if (adminOption == 2) { // Remove book
                    std::string isbn;
                    std::cout << "Enter ISBN to remove: ";
                    std::cin >> isbn;
                    std::cout << admin.removeBook(library.getBooks(), isbn) << "\n";
                } else {
                    std::cout << "Invalid option.\n";
                }
                break;
            }
            case 4: { // Reader actions
                int readerOption;
                std::cout << "\n=== Reader Menu ===\n";
                std::cout << "1. Borrow book\n";
                std::cout << "2. Return book\n";
                std::cout << "Select an option: ";
                std::cin >> readerOption;

                if (readerOption == 1) { // Borrow book
                    std::string isbn;
                    std::cout << "Enter ISBN to borrow: ";
                    std::cin >> isbn;
                    bool found = false;
                    for (auto book : library.getBooks()) {
                        if (book.getISBN() == isbn) {
                            std::cout << reader.requestBook(book) << "\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        std::cout << "Book with ISBN " << isbn << " not found.\n";
                    }
                } else if (readerOption == 2) { // Return book
                    std::string isbn;
                    std::cout << "Enter ISBN to return: ";
                    std::cin >> isbn;
                    bool found = false;
                    for (auto book : library.getBooks()) {
                        if (book.getISBN() == isbn) {
                            std::cout << reader.returnBook(book) << "\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        std::cout << "Book with ISBN " << isbn << " not found.\n";
                    }
                } else {
                    std::cout << "Invalid option.\n";
                }
                break;
            }
            case 5: // Exit
                std::cout << "Exiting the system...\n";
                break;
            default:
                std::cout << "Invalid option. Please try again.\n";
        }
    } while (option != 5);

    return 0;
}
