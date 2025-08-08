#include<iostream>
using namespace std;

class Room{
    protected:
        int roomNumber;
        bool isAvailable;

    public:
        Room(int number): roomNumber(number), isAvailable(true) {}
        virtual ~Room(){}
    
        virtual double calculateRate(int nights)=0;
    
        bool checkAvailability() const {return isAvailable;}
        void bookRoom(){ isAvailable = false;}
        void freeRoom() {isAvailable = true;}
    
        int getRoomnumber() const {return roomNumber;}
    };

class StandardRoom : public Room{
    public:
        StandardRoom(int number):Room(number){}
        double calculateRate(int nights) override {
            return 100.0 * nights;
        }
};

class DeluxRoom : public Room{
    public:
        DeluxRoom(int number) : Room(number){}
        double calculateRate(int nights) override {
            return 150.0*nights;
        }
};

class SuiteRoom : public Room{
    public:
        SuiteRoom(int number) : Room(number){}
        double calculateRate(int nights) override {
            return 250.0 * nights;
        }
};

class Customer{
    private:
        string name;
        string phone;

    public:
        Customer(const string& customerName, const string& customerPhone) : name(customerName), phone(customerPhone){}

        string getName() const{return name;}
        string getPhone() const{ return phone;}
};

class Reservation {
    private:
        shared_ptr <Room> room;
        Customer customer;
        int nights;

    public:
        Reservation(shared_ptr<Room> room, const Customer& customer,int nights) : room(room), customer(customer),nights(nights){
            if(nights <=0 ){
                throw invalid_argument("Nights must be greater than zero.");
            }
            if (!room->checkAvailability()){
                throw runtime_error("'Room is not available.");
            }
            room->bookRoom();
        }
    
    ~Reservation() { room->freeRoom();}

    double calculateTotalCost() const {return room->calculateRate(nights);}
    string getCustomerName() const {return customer.getName();}
    int getRoomNumber() const {return room->getRoomNumber();}

    void cancelReservation(){
        room->freeRoom();
        cout<< "Reservation cancelled for room "<< room->
        getRoomnumber() << ".\n";
    }

};