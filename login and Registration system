                                //CodeAlpha_Login n Registration System//
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

// Function prototypes
void registerUser();
bool loginUser();
void displayMenu();

int main() {
    int choice;
    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Clear the buffer after reading an integer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loginUser()) {
                    std::cout << "Welcome to the system!" << std::endl;
                    // You might add more functionality here for logged-in users
                }
                break;
            case 3:
                std::cout << "Exiting program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
        std::cout << std::endl; // Add a newline for better readability
    } while (choice != 3);

    return 0;
}

void displayMenu() {
    std::cout << "--- Main Menu ---" << std::endl;
    std::cout << "1. Register" << std::endl;
    std::cout << "2. Login" << std::endl;
    std::cout << "3. Exit" << std::endl;
}

void registerUser() {
    std::string username, password;
    std::cout << "Enter desired username: ";
    std::getline(std::cin, username); // Use getline for usernames with spaces (if allowed)
    std::cout << "Enter desired password: ";
    std::getline(std::cin, password);

    std::ifstream infile("users.txt");
    std::string line;
    bool usernameExists = false;
    while (std::getline(infile, line)) {
        if (line.substr(0, line.find(":")) == username) {
            usernameExists = true;
            break;
        }
    }
    infile.close();

    if (usernameExists) {
        std::cout << "Username already exists. Please choose a different one." << std::endl;
    } else {
        std::ofstream outfile("users.txt", std::ios::app); // Open in append mode
        outfile << username << ":" << password << std::endl;
        outfile.close();
        std::cout << "Registration successful!" << std::endl;
    }
}

bool loginUser() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::getline(std::cin, username);
    std::cout << "Enter password: ";
    std::getline(std::cin, password);

    std::ifstream infile("users.txt");
    if (!infile.is_open()) {
        std::cout << "Error: User database not found. Please register first." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(infile, line)) {
        std::string storedUsername = line.substr(0, line.find(":"));
        std::string storedPassword = line.substr(line.find(":") + 1);

        if (username == storedUsername && password == storedPassword) {
            infile.close();
            std::cout << "Login successful!" << std::endl;
            return true;
        }
    }
    infile.close();
    std::cout << "Invalid username or password." << std::endl;
    return false;
}
