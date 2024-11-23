Library Management System

Project Description

This project is a library management system developed in C++ using object-oriented programming (OOP). It provides tools for managing books, users (readers and administrators), and loans in a library. Administrators have permissions to add, remove, and manage books and loans, while readers can browse available books and request or return loans.

Context

Library management is essential in educational and community institutions, where efficient organization is key. This project automates processes to improve efficiency, minimize human errors, and ensure scalability for future enhancements. It serves as a practical example of applying OOP concepts, such as inheritance, composition, and polymorphism, while addressing real-world needs.


Project Structure

The system follows a modular structure and adheres to coding standards to ensure readability, maintainability, and scalability. Key classes and their responsibilities include:

Book: Represents books in the library, storing attributes such as title, author, ISBN, and availability status.

User: Base class for library users, storing shared attributes like name.

Reader: Inherits from User and represents users who can request and return books.

Administrator: Inherits from User and represents users with administrative privileges to manage books and loans.

Library: Manages the collection of books and oversees operations such as book loans and returns.

Features

Book Management


Administrators can add or remove books from the library's collection.


Loan Management


Readers can borrow available books and return them when finished.

The system automatically updates book availability status.

Book Search


Users can search for books by ISBN and view details like title, author, and availability.

User Permissions

Differentiates between readers and administrators to assign appropriate permissions.
Usage


Execution

Compile the program using a C++ compiler (e.g., g++) and run the resulting executable in a terminal.

Navigate through the menu options to perform actions like adding books, borrowing books, and managing loans.
Requirements

C++ compiler supporting C++11 or later.

Basic understanding of terminal/command-line usage.

What the Project Can Do

Efficiently manage a collection of books.

Enforce user permissions for library operations.

Ensure accurate tracking of book availability.

What the Project Cannot Do

Does not handle advanced user authentication.

Does not support concurrent operations (e.g., multiple users interacting simultaneously).

Does not include a graphical user interface (GUI).

![library management dagram drawio](https://github.com/user-attachments/assets/0a6c32d6-800a-4bf8-a55f-23e7cd8ec071)

