class ParkingSystem {
public:
      vector<int> Parking;

    ParkingSystem(int big, int medium, int small) {
        Parking.push_back(big);
        Parking.push_back(medium);
        Parking.push_back(small);
    }
    
    bool addCar(int carType) {
        if(Parking[carType-1] != 0){
            Parking[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */