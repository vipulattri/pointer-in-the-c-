#include <iostream>
#include <conio.h> // For _getch() function (for Windows, for Linux use appropriate alternative)

using namespace std;

class Car {
private:
    int position;

public:
    Car() : position(0) {}

    void moveLeft() {
        if (position > -5) // Limiting left movement
            position--;
    }

    void moveRight() {
        if (position < 5) // Limiting right movement
            position++;
    }

    int getPosition() {
        return position;
    }
};

int main() {
    Car car;
    char userInput;

    do {
        system("cls"); // Clear console screen (for Windows, for Linux use appropriate alternative)
        cout << "Use 'A' key to move left, 'D' key to move right, 'X' key to exit" << endl;
        cout << "Car Position: " << car.getPosition() << endl;

        // Display car in console
        for (int i = 0; i < 10; ++i) {
            if (i == 5 + car.getPosition())
                cout << "*****"<<endl<<"****"<<endl<<"***"<<endl;
            else
                cout << " ";
        }
        cout << endl;

        userInput = _getch(); // Get user input (for Windows, for Linux use appropriate alternative)

        switch (userInput) {
            case 'a':
            case 'A':
                car.moveLeft();
                break;
            case 'd':
            case 'D':
                car.moveRight();
                break;
            default:
                break;
        }
    } while (userInput != 'x' && userInput != 'X');

    cout << "Exiting the game. Goodbye!" << endl;

    return 0;
}
