#include "tripMgr.hpp"

int main() {
    //-------------------------Creating Riders and Drivers-------------------------//
    Rider* trumpRider = new Rider("Trump", RATING::FIVE_STARS);
    Rider* bidenRider = new Rider("Biden", RATING::FIVE_STARS);
    RiderMgr* riderMgr = RiderMgr::getRiderMgr();
    riderMgr->addRider("Trump", trumpRider);
    riderMgr->addRider("Biden", bidenRider);

    Driver* modiDriver = new Driver("Modi", RATING::THREE_STARS);
    Driver* rahulDriver = new Driver("Rahul", RATING::FOUR_STARS);
    DriverMgr* driverMgr = DriverMgr::getDriverMgr();
    driverMgr->addDriver("Modi", modiDriver);
    driverMgr->addDriver("Rahul", rahulDriver);

    TripMgr* tripMgr = TripMgr::getTripMgr();

    cout << endl << "Creating Trip for Trump from location (10, 10) to (30, 30)" << endl;
    tripMgr->CreateTrip(trumpRider, new Location(10, 10), new Location(30, 30));

    cout << endl << "Creating Trip for Biden from location (200, 200) to (500, 500)" << endl;
    tripMgr->CreateTrip(bidenRider, new Location(200, 200), new Location(500, 500));

    unordered_map<int, Trip*> tripsMap = tripMgr->getTripsMap();
    for(auto mapVal : tripsMap) {
        (mapVal.second)->displayTripDetails();
    }

    return 0;
}
