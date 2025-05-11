#include <iostream>
#include "RentalStrategy.h"

int main()
{
    RentalService rentalService;
    CarRental petrolCar(false);
    CarRental electricCar(true);
    HouseRental houseRental;

    try
    {
        rentalService.executeRental(5);
        std::cout << std::endl;

        rentalService.setRentalPricer(&petrolCar); // Polimorfizmas
        rentalService.executeRental(5);
        std::cout << std::endl;

        rentalService.setRentalPricer(&electricCar); // Polimorfizmas
        rentalService.executeRental(5);
        std::cout << std::endl;

        rentalService.setRentalPricer(&houseRental); // Polimorfizmas
        rentalService.executeRental(3);
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}