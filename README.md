# Restaurant-system
A simple console-based Restaurant Management System in C++ using OOP concepts (classes &amp; objects). Supports Breakfast, Lunch, Snacks, Beverages &amp; Dinner menus, lets users place multiple orders in one session, and generates a final bill with running total.

A simple console-based restaurant ordering system built in C++ to practice 
Object-Oriented Programming concepts like classes, objects, and encapsulation.

## Features
- 5 separate menu categories: **Breakfast, Lunch, Snacks, Beverages, Dinner**
- Each category is its own class with a `display()` method (shows menu) and a 
  `set()` method (takes user input, validates it, and returns the price)
- Users can order from **multiple categories in a single session** via an 
  "Order more?" loop
- Automatically calculates and displays a **final bill** with the total amount 
  to be paid
- Basic input validation for invalid menu choices


## Concepts Demonstrated
- Classes & Objects
- Member functions returning values (`int` return type used to accumulate a running total)
- Control flow (`if-else`, `while` loops)
- Basic console I/O (`cin`/`cout`)
