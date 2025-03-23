#pragma once
#include "tripMetaData.hpp"
#include <iostream>

class PricingStrategy {
    public:
    virtual double calculatePrice(TripMetaData* pTripMetaData) = 0;
};
