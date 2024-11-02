# Library-Management-System
Project Description

This project is a library management system implemented in C++ using object-oriented programming. It allows managing information about books, users (readers and administrators), and loans in a library. Administrators can add and remove books and manage loans, while readers can browse available books and request loans.


Context

Library management is a common task in many educational and community institutions. This system helps automate part of that process, improving efficiency and reducing the possibility of human errors. I chose this project because it involves key object-oriented programming concepts such as inheritance and polymorphism, while providing a practical solution to a real-world problem. The modular structure of the code also makes it easy to expand the system to include new features in the future.


#Project Structure

The system is organized into classes, each with specific responsibilities:

Book: Represents a book in the library and stores information such as the title, author, ISBN, and status (available or on loan).

User: Base class representing system users.

Reader: Inherits from User and represents users who can request and return books.

Administrator: Inherits from User and represents users with permissions to add and remove books, as well as manage loans.

Library: Contains the list of books and users, and manages loan and return operations.


Features

Book Management: Allows adding and removing books from the library.

Loans: Readers can request loans for available books and return them when they are done.

Book Search: Users can browse the list of available books in the library.

User Management: Differentiates between readers and administrators to assign permissions.
