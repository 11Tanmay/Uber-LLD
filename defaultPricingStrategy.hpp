#pragma once
#include "pricingStrategy.hpp"

class DefaultPricingStrategy : public PricingStrategy {
    public:
    double calculatePrice(TripMetaData* pTripMetaData) {
        std::cout<<"Based on default strategy, price is 100"<<'\n';
        return 100;
    }
};
