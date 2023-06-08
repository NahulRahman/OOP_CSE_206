#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
    string make;
    string model;
    int year;
    double rentalPrice;

public:
    Car(string make, string model, int year, double rentalPrice)
        : make(make), model(model), year(year), rentalPrice(rentalPrice) {}

    void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Rental Price: $" << rentalPrice << " per day" << endl;
    }
};

class EconomyCar : public Car {
public:
    EconomyCar(string make, string model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayDetails() {
        cout << "Type: Economy Car" << endl;
        Car::displayDetails();
    }
};

class StandardCar : public Car {
public:
    StandardCar(string make, string model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayDetails() {
        cout << "Type: Standard Car" << endl;
        Car::displayDetails();
    }
};

class LuxuryCar : public Car {
public:
    LuxuryCar(string make, string model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayDetails() {
        cout << "Type: Luxury Car" << endl;
        Car::displayDetails();
    }
};

int main() {
    EconomyCar economyCar("Toyota", "Corolla", 2022, 50.0);
    StandardCar standardCar("Honda", "Accord", 2021, 80.0);
    LuxuryCar luxuryCar("Mercedes-Benz", "S-Class", 2023, 150.0);

    economyCar.displayDetails();
    cout << endl;

    standardCar.displayDetails();
    cout << endl;

    luxuryCar.displayDetails();
    cout << endl;

    return 0;
}
