#include <iostream>

const int NUM_FLOORS = 10;

int currentFloor = 0;
bool directionUp = true;

void moveElevator() {
    if (directionUp) {
        currentFloor++;
    } else {
        currentFloor--;
    }

    if (currentFloor == NUM_FLOORS - 1) {
        directionUp = false;
    } else if (currentFloor == 0) {
        directionUp = true;
    }
}

void pressButton(int floor) {
    if (floor > currentFloor) {
        directionUp = true;
    } else {
        directionUp = false;
    }
}

int main() {
    std::cout << "Elevator is on floor " << currentFloor << std::endl;

    pressButton(5);
    while (currentFloor != 5) {
        moveElevator();
        std::cout << "Elevator is on floor " << currentFloor << std::endl;
    }
    std::cout << "Elevator has reached floor 5." << std::endl;

    return 0;
}
