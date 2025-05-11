#include <string>

#pragma once


class RentalPricer{
    public:
    virtual double calculatePrice(int days) = 0; 
    virtual std::string rentalType() = 0;
    virtual ~RentalPricer() = default; 
    
};


class DefaultRental : public RentalPricer{
    public:
    double calculatePrice(int days) override;
    std::string rentalType() override;

};

class CarRental : public RentalPricer{
    private:
    bool isElectric;

    public:
    CarRental(bool isElectric = false);
    void setElectric(bool isElectric);
    bool getElectric() const;
    double calculatePrice(int days) override;
    std::string rentalType() override;
};

class HouseRental : public RentalPricer{
    public:
    double calculatePrice(int days) override;
    std::string rentalType() override;
};

class RentalService{
    private:
    RentalPricer* pricer;
    DefaultRental defaultRental;
    public:
    RentalService();
    void setRentalPricer(RentalPricer* rentalPricer);
    RentalPricer* getPricer() const { return pricer; }
    void executeRental(int days);
};