#include "ManageCar.h"


ManageCar::ManageCar() {

    values = nullptr;
    numberOfCars = 0;


}

void ManageCar::addCar(const MyCar &mc) {
    MyCar **temp = new MyCar *[numberOfCars + 1];
    for (int i = 0; i < numberOfCars; ++i) {
        temp[i] = values[i];
    }
    temp[numberOfCars] = new MyCar(mc);
    delete[] values;
    values = temp;
    numberOfCars++;
}

void ManageCar::removeCar(int number) {

    for (int i = 0; i < numberOfCars; i++) {
        if (values[i]->getLicenseNumber() == number) {
            values[i] = nullptr;
            numberOfCars--;
        } else {

        }

    }

}

int *ManageCar::CarsFromToPrices(int domain, int range, int size) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (values[i]->getCost() >= domain && values[i]->getCost() <= range)
            counter++;
    }
    int inYears[counter];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (values[i]->getYear() >= domain && values[i]->getYear() <= range) {
            inYears[index] = values[i]->getYear();
            index++;
        }

    }
    return inYears;

}

int *ManageCar::CarsFromToYear(int domain, int range, int size) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (values[i]->getYear() >= domain && values[i]->getYear() <= range)
            counter++;
    }
    int inYears[counter];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (values[i]->getYear() >= domain && values[i]->getYear() <= range) {
            inYears[index] = values[i]->getYear();
            index++;
        }

    }
    return inYears;
}

void ManageCar::printCar(int number, int size) {

    for (int i = 0; i < size; ++i) {
        if (values[i]->getLicenseNumber() == number)
            values[i]->print();
        else
            throw "Not exist :)";
    }


}

void ManageCar::deleteAll() {

    *values = nullptr;
    numberOfCars = 0;
}

void ManageCar::printAll() {

    MyCar *temp;
    for (int i = 0; i < numberOfCars; ++i) {
        for (int j = i + 1; j < numberOfCars; ++j) {
            if (values[i]->getLicenseNumber() > values[j]->getLicenseNumber()) {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }


    }
    for (int j = 0; j < numberOfCars; ++j) {
        values[j]->print();
    }

}

ManageCar::~ManageCar() {

    delete[] values;
}

void ManageCar::printBetweenYears(int domain, int range) {
    for (int i = 0; i < numberOfCars; ++i) {
        if (values[i]->getYear() >= domain && values[i]->getYear() <= range)
            values[i]->print();
    }
}

void ManageCar::printBetweenPrices(int domain, int range) {
    for (int i = 0; i < numberOfCars; ++i) {
        if (values[i]->getCost() >= domain && values[i]->getCost() <= range)
            values[i]->print();
    }
}








