#include "RentalStrategy.h"
#include <iostream>

double HouseRental::calculatePrice(int days) {
    return days * 250.5;
}

std::string HouseRental::rentalType() {
    return "House rental";
}