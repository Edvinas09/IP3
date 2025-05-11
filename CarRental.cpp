#include "RentalStrategy.h"
#include <iostream>

CarRental::CarRental(bool electric) : isElectric(electric) {};

void CarRental::setElectric(bool electric) {
    isElectric = electric;
}

bool CarRental::getElectric() const {
    return isElectric;
}

double CarRental::calculatePrice(int days) {
    if(isElectric) {
        return days * 75.0;
    }
    return days * 150.0;
}

std::string CarRental::rentalType() {
    return isElectric ? "Electric car rental" : "Petrol car rental";
}