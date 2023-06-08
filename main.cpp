#include <iostream>
#include "MyCar.h"
#include "ManageCar.h"

MyCar addCarOption1() {
    int licenseNumber;
    char model[20];
    double cost;
    int year;
    char color[20];
    int engineVolume;
    bool transKind;
    char country[20];
    int hand;

    std::cout << "Enter license number: ";
    std::cin >> licenseNumber;

    std::cout << "Enter model: ";
    std::cin.ignore();
    std::cin.getline(model, 100);

    std::cout << "Enter cost: ";
    std::cin >> cost;

    std::cout << "Enter year: ";
    std::cin >> year;

    std::cout << "Enter color: ";
    std::cin.ignore();
    std::cin.getline(color, 100);

    std::cout << "Enter engine volume: ";
    std::cin >> engineVolume;

    std::cout << "Enter transmission kind (0 for manual, 1 for automatic): ";
    std::cin >> transKind;

    std::cout << "Enter country: ";
    std::cin.ignore();
    std::cin.getline(country, 100);

    std::cout << "Enter hand: ";
    std::cin >> hand;


    MyCar c(licenseNumber, model, cost, year, color, engineVolume, transKind, country, hand);

    return c;
}

int main() {

    ManageCar manager;


    int input = 0;
    while (input != 6) {
        std::cout << "Choose option:" << std::endl
                  << " 1 - add car" << std::endl
                  << " 2 - remove car" << std::endl
                  << " 3 - print all cars between years" << std::endl
                  << " 4 - print all cars between costs" << std::endl
                  << " 5 - print all cars" << std::endl
                  << " 6 - Exit " << endl;

        MyCar car1;
        std::cin >> input;
        switch (input) {
            case 1: {
                car1 = addCarOption1();
                manager.addCar(car1);
                break;
            }
            case 2: {
                int numToRemove;
                cout << "Enter a number car to delete, please: ";
                cin >> numToRemove;
                manager.removeCar(numToRemove);
                break;
            }
            case 3: {
                int domain, range;
                cout << "Enter domain year: " << endl;
                cin >> domain;
                cout << "Enter range year: " << endl;
                cin >> range;
                manager.printBetweenYears(domain, range);
                break;
            }
            case 4: {
                int yearDomain, yearRange;
                cout << "Enter domain price: " << endl;
                cin >> yearDomain;
                cout << "Enter range price: " << endl;
                cin >> yearRange;
                manager.printBetweenPrices(yearDomain, yearRange);
                break;
            }
            case 5: {
                manager.printAll();
                break;
            }
            case 6: {
                return 0;
                break;
            }
            default: {
                cout << "Invalid input " << endl;
                break;
            }
        }

    }

    return 0;
}









