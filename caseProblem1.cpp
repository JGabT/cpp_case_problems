#include <iostream>
#include <string>

using namespace std;

int width = 60;
int height = 15;

int centerLine = height / 4;
int centerColumn = width / 2 - 4;

// Function to clear the screen
void clearScreen() {
    cout << "\033[2J\033[1;1H"; // Clear the screen and move cursor to top-left
}

// Function to move the cursor to a specific line and column
void gotoLine(int line, int column) {
    cout << "\033[" << line << ";" << column << "H"; // Move cursor to (line, column)
}

// Function to draw the box
void drawBox(int width, int height) {
    // Print the top border
    for (int i = 0; i < width; i++) {
        cout << "x"; // Box border
    }
    cout << "\n"; // Move to the next line

    // Print the sides of the box
    for (int i = 0; i < height - 2; i++) {
        cout << "x"; // Left border
        for (int j = 0; j < width - 2; j++) {
            cout << " "; // Fill the inside with spaces
        }
        cout << "x\n"; // Right border and move to the next line
    }

    // Print the bottom border
    for (int i = 0; i < width; i++) {
        cout << "x"; // Bottom border
    }
    cout << "\n"; // Move to the next line
}

// Function for addition
void addition() {
    int a, b;
    clearScreen();
    drawBox(width, height);

    gotoLine(centerLine, centerColumn - 10);
    cout << "[1] Addition\n";
    gotoLine(centerLine + 1, centerColumn - 10);
    cout << "First number: ";
    cin >> a;
    gotoLine(centerLine + 2, centerColumn - 10);
    cout << "Second number: ";
    cin >> b;
    int sum = a + b;
    gotoLine(centerLine + 4, centerColumn - 10);
    cout << "The sum is: " << sum << "\n\n";
    gotoLine(centerLine + 5, centerColumn - 10);
    cout << "Press Enter to return to the menu...";
    cin.ignore();
    cin.get();
}

// Function for subtraction
void subtraction() {
    int a, b;
    clearScreen();
    drawBox(width, height);

    gotoLine(centerLine, centerColumn - 10);
    cout << "[2] Subtraction\n";
    gotoLine(centerLine + 1, centerColumn - 10);
    cout << "First number: ";
    cin >> a;
    gotoLine(centerLine + 2, centerColumn - 10);
    cout << "Second number: ";
    cin >> b;
    int difference = a - b;
    gotoLine(centerLine + 4, centerColumn - 10);
    cout << "The difference is: " << difference << "\n\n";
    gotoLine(centerLine + 5, centerColumn - 10);
    cout << "Press Enter to return to the menu...";
    cin.ignore();
    cin.get();
}

// Function for multiplication
void multiplication() {
    int a, b;
    clearScreen();
    drawBox(width, height);

    gotoLine(centerLine, centerColumn - 10);
    cout << "[3] Multiplication\n";
    gotoLine(centerLine + 1, centerColumn - 10);
    cout << "First number: ";
    cin >> a;
    gotoLine(centerLine + 2, centerColumn - 10);
    cout << "Second number: ";
    cin >> b;
    int product = a * b;
    gotoLine(centerLine + 4, centerColumn - 10);
    cout << "The product is: " << product << "\n\n";
    gotoLine(centerLine + 5, centerColumn - 10);
    cout << "Press Enter to return to the menu...";
    cin.ignore();
    cin.get();
}

// Function for division
void division() {
    int a, b;
    clearScreen();
    drawBox(width, height);

    gotoLine(centerLine, centerColumn - 10);
    cout << "[4] Division\n";
    gotoLine(centerLine + 1, centerColumn - 10);
    cout << "First number: ";
    cin >> a;
    gotoLine(centerLine + 2, centerColumn - 10);
    cout << "Second number: ";
    cin >> b;

    if (b != 0) { // Check for division by zero
        double quotient = static_cast<double>(a) / b;
        gotoLine(centerLine + 4, centerColumn - 10);
        cout << "The quotient is: " << quotient << "\n\n";
    } else {
        gotoLine(centerLine + 4, centerColumn - 10);
        cout << "Error: Division by zero is not allowed.\n\n";
    }

    gotoLine(centerLine + 5, centerColumn - 10);
    cout << "Press Enter to return to the menu...";
    cin.ignore();
    cin.get();
}

// Function to display the menu and handle choices
void menu() {
    int choice;

    do {
        // Clear the screen and draw the box
        clearScreen();
        drawBox(width, height);

        gotoLine(centerLine, centerColumn);
        cout << "Main Menu";
        gotoLine(centerLine + 1, centerColumn - 10);
        cout << "[1] Addition";
        gotoLine(centerLine + 2, centerColumn - 10);
        cout << "[2] Subtraction";
        gotoLine(centerLine + 3, centerColumn - 10);
        cout << "[3] Multiplication";
        gotoLine(centerLine + 4, centerColumn - 10);
        cout << "[4] Division";
        gotoLine(centerLine + 5, centerColumn - 10);
        cout << "[5] Exit";

        gotoLine(centerLine + 7, centerColumn - 10);
        cout << "Choose a number: ";
        gotoLine(centerLine + 7, centerColumn + 7);
        cin >> choice;

        // Execute functionality based on choice
        switch (choice) {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            clearScreen();
            gotoLine(1, 1);
            cout << "Exiting... Goodbye!";
            break;
        default:
            gotoLine(centerLine + 8, centerColumn - 10);
            cout << "Invalid choice. Please try again.\n";
            cin.ignore();
            cin.get();
        }
    } while (choice != 5);

    // Move cursor back below the box to avoid overwriting
    gotoLine(height + 1, 1);
}

int main() {
    menu();
    return 0;
}
