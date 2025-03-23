#pragma once
#include "rider.hpp"
#include "driver.hpp"
#include "pricingStrategy.hpp"
#include "driverMatchingStrategy.hpp"

class Trip {
    Rider* rider;
    Driver* driver;
    Location* srcLoc;
    Location* dstLoc;
    TRIP_STATUS status;
    int tripId;
    double price;
    PricingStrategy* pricingStrategy;
    DriverMatchingStrategy* driverMatchingStrategy;

    public:
    Trip(Rider* pRider, Driver* pDriver, Location* pSrcLoc, Location* pDstLoc, double pPrice, PricingStrategy* pPricingStrategy, DriverMatchingStrategy* pDriverMatchingStrategy) : rider(pRider), driver(pDriver), srcLoc(pSrcLoc), dstLoc(pDstLoc), price(pPrice), pricingStrategy(pPricingStrategy), driverMatchingStrategy(pDriverMatchingStrategy) {
        status = TRIP_STATUS::DRIVER_ON_THE_WAY;
        tripId = nextTripId;
        nextTripId++;
    }
    int getTripId() {
        return tripId;
    }
    void displayTripDetails() {
        cout << '\n';
        cout << "Trip id - " << tripId << endl;
        cout << "Rider - " << rider->getRiderName() << endl;
        cout << "Driver - " << driver->getDriverName() << endl;
        cout << "Price - " << price << endl;
        cout << "Locations - " << srcLoc->latitude << ", " << srcLoc->longitude << " and "<< dstLoc->latitude<<", "<<dstLoc->longitude << endl; 
    }
};
