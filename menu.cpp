#include "menu.h"
#include <iostream>

void Menu::run(GradeBook& gb) {
    int choice;
    std::string name;
    int amount, index;

    do {
        std::cout << "\n===== Grade Book Menu =====\n";
        std::cout << "1. Print all student grades\n";
        std::cout << "2. Increase a student's specific grade\n";
        std::cout << "3. Decrease a student's specific grade\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                gb.printAll();
                break;

            case 2:
                std::cout << "Enter student name: ";
                std::cin >> name;
                std::cout << "Enter grade index (0-9): ";
                std::cin >> index;
                std::cout << "Enter amount to increase: ";
                std::cin >> amount;
                if (!gb.increaseGrade(name, index, amount))
                    std::cout << "Student not found or invalid index.\n";
                break;

            case 3:
                std::cout << "Enter student name: ";
                std::cin >> name;
                std::cout << "Enter grade index (0-9): ";
                std::cin >> index;
                std::cout << "Enter amount to decrease: ";
                std::cin >> amount;
                if (!gb.decreaseGrade(name, index, amount))
                    std::cout << "Student not found or invalid index.\n";
                break;

            case 4:
                std::cout << "Exiting program.\n";
                break;

            default:
                std::cout << "Invalid choice.\n";
        }

    } while (choice != 4);
}