#include "RentalStrategy.h"
#include <iostream>

double DefaultRental::calculatePrice(int days) {
    return days * 50.0;
}

std::string DefaultRental::rentalType() {
    return "Default rental";
}

RentalService::RentalService() : pricer(&defaultRental) {}

void RentalService::setRentalPricer(RentalPricer* rentalPricer) {
    pricer = rentalPricer;
}

RentalPricer* RentalService::getPricer() const {
    return pricer;
}

void RentalService::executeRental(int days) {
    if (pricer) {
        std::cout << "Rental type: " << pricer->rentalType() << std::endl;
        std::cout << "Rental price: " << pricer->calculatePrice(days) << std::endl;
    } else {
        std::cout << "No rental pricer set." << std::endl;
    }
}