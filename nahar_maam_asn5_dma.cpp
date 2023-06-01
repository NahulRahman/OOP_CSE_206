
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

    virtual void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Rental Price: $" << rentalPrice << " per day" << endl;
    }

    virtual string getType() {
        return "Car";
    }

    virtual ~Car() {}
};

class EconomyCar : public Car {
public:
    EconomyCar(string make, string model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayDetails() override {
        cout << "Type: Economy Car" << endl;
        Car::displayDetails();
    }

    string getType() override {
        return "Economy Car";
    }
};

class StandardCar : public Car {
public:
    StandardCar(string make, string model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayDetails() override {
        cout << "Type: Standard Car" << endl;
        Car::displayDetails();
    }

    string getType() override {
        return "Standard Car";
    }
};

class LuxuryCar : public Car {
public:
    LuxuryCar(string make, string model, int year, double rentalPrice)
        : Car(make, model, year, rentalPrice) {}

    void displayDetails() override {
        cout << "Type: Luxury Car" << endl;
        Car::displayDetails();
    }

    string getType() override {
        return "Luxury Car";
    }
};

int main() {
    Car* car1 = new EconomyCar("Toyota", "Corolla", 2022, 50.0);
    Car* car2 = new StandardCar("Honda", "Accord", 2021, 80.0);
    Car* car3 = new LuxuryCar("Mercedes-Benz", "S-Class", 2023, 150.0);

    car1->displayDetails();
    cout << endl;

    car2->displayDetails();
    cout << endl;

    car3->displayDetails();
    cout << endl;

    delete car1;
    delete car2;
    delete car3;

    return 0;
}
