#include <iostream>
#include <string>
using namespace std;


class Vehicle {
protected:
    string brand; 
    int year;    

public:
   
    Vehicle(string brand, int year) : brand(brand), year(year) {}

    
    string getBrand() const { return brand; }
    int getYear() const { return year; }

    
    virtual void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};


class Car : public Vehicle {
private:
    int numDoors; 

public:
    
    Car(string brand, int year, int numDoors) : Vehicle(brand, year), numDoors(numDoors) {}


    int getNumDoors() const { return numDoors; }

    
    void displayInfo() const override {
        cout << "Car information:" << endl;
        Vehicle::displayInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
};


class Bike : public Vehicle {
private:
    string type; 

public:
    
    Bike(string brand, int year, string type) : Vehicle(brand, year), type(type) {}

   
    string getType() const { return type; }

    
    void displayInfo() const override {
        cout << "Bike information:" << endl;
        Vehicle::displayInfo();
        cout << "Type: " << type << endl;
    }
};

int main() {
    
    Car car("BMW", 2021, 3);
    Bike bike("Giant", 2019, "Mountain");

    
    car.displayInfo();
    cout << endl;
    bike.displayInfo();

    return 0;
}
