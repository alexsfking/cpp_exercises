#include <iostream>
#include <vector>

using namespace std;

// mix of debugging and implementing

// Debug the existing HotelRoom and HotelApartment classes' implementations 
// so that the existing code computing the total profit returns a correct 
// profit.
// Your function will be tested against several cases by the locked template code.

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
    
    virtual int get_price() {
        return 50*bedrooms_ + 100*bathrooms_;
    }
private:
    int bedrooms_;
    int bathrooms_;
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};

