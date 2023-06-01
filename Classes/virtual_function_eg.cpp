#include <iostream>
#include <vector>

using namespace std;

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
    
    virtual int get_price() {
        return 50;
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
        return 100;
    }
};

int main() {
    
    HotelRoom * room1 =new HotelRoom(1, 1);
        
    HotelApartment* room2 = new HotelApartment(1, 1);
    
    cout<< room1->get_price()<<" "<<typeid(room1).name()<<endl;
    cout<<room2->get_price()<<" "<<typeid(room2).name()<<endl;
  
    HotelRoom* arr[2];
    arr[0] = room1; arr[1] = room2;
    for(auto x:arr){
        cout<< x->get_price()<<" "<<typeid(x).name()<<endl;
    }
    return 0;
}
