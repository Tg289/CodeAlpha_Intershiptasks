# Login and Registration System

**Internship Program:** CodeAlpha C++ Programming Internship  
**Task:** Task 2 – User Authentication System

## Overview

This project implements a command-line based user login and registration system. Credentials are stored in a local file with simple verification logic.

## Features

- **Registration:** Create new accounts with unique usernames.
- **Login:** Verify username and password from saved file.
- **Storage:** Credentials saved in `users.txt`.

## How to Compile and Run

### Prerequisites
- C++ compiler (e.g., g++)

### Steps
```bash
g++ auth_system.cpp -o auth_system
./auth_system
```

## Example Usage
```
--- Main Menu ---
1. Register
2. Login
3. Exit

Enter your choice: 1
Username: testuser
Password: password123
Registration successful!

Enter your choice: 2
Username: testuser
Password: password123
Login successful!
```

## File Structure

- `auth_system.cpp` – C++ source file.
- `users.txt` – Stores credentials (`username:password`).

## Future Enhancements

- Implement password hashing (e.g., SHA-256).
- Add password reset functionality.
- Switch to database storage (e.g., SQLite).