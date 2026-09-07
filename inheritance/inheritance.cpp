#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

class Vehicle {
    public:
    string name;
    int model_no;
    int no_of_tyres;
    int no_of_seats;
    string color;
    int speed;
    string headlight_colour;
    string fuel_type;
    string brake_type;
    int top_speed;
    int no_of_indicators;
    int no_of_wheels;
    int no_of_gears;
    int side_mirror;

    Vehicle() {
        name = "";
        model_no = 0;
        no_of_tyres = 0;
        no_of_seats = 0;
        color = "";
        speed = 0;
        headlight_colour = "";
        fuel_type = "";
        brake_type = "";
        top_speed = 0;
        no_of_indicators = 0;
        no_of_wheels = 0;
        no_of_gears = 0;
        side_mirror = 0;
    }

    void start_engine() {
        cout << "Engine started " << name << endl;
    }
    void stop_engine() {
        cout << "Engine stopped " << name << endl;
    }
};

class Car : public Vehicle {
    public:
    int no_of_doors;

    Car() {
        no_of_doors = 0;
    }

    void AC(){
        cout << "AC is on" << endl;
    }
    void start_engine() {
        cout << "Car engine started " << name << endl;
    }
    void stop_engine() {
        cout << "Car engine stopped " << name << endl;
    }
    void get(){
        cout << "Enter car details:" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Model No: ";
        cin >> model_no;
        cout << "No of Doors: ";
        cin >> no_of_doors;
        cout << "No of Tyres: ";
        cin >> no_of_tyres;
        cout << "No of Seats: ";
        cin >> no_of_seats;
        cout << "Color: ";
        cin >> color;
        cout << "Speed: ";
        cin >> speed;
        cout << "Headlight Colour: ";
        cin >> headlight_colour;
        cout << "Fuel Type: ";
        cin >> fuel_type;
        cout << "Brake Type: ";
        cin >> brake_type;
        cout << "Top Speed: ";
        cin >> top_speed;
        cout << "No of Indicators: ";
        cin >> no_of_indicators;
        cout << "No of Wheels: ";
        cin >> no_of_wheels;
        cout << "No of Gears: ";
        cin >> no_of_gears;
        cout << "Side Mirror: ";
        cin >> side_mirror;
        cout << endl << "Input complete." << endl;
    }
    void display(){
        cout << "----- DISPLAY -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Model No: " << model_no << endl;
        cout << "No of Doors: " << no_of_doors << endl;
        cout << "No of Tyres: " << no_of_tyres << endl;
        cout << "No of Seats: " << no_of_seats << endl;
        cout << "Color: " << color << endl;
        cout << "Speed: " << speed << endl;
        cout << "Headlight Colour: " << headlight_colour << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Brake Type: " << brake_type << endl;
        cout << "Top Speed: " << top_speed << endl;
        cout << "No of Indicators: " << no_of_indicators << endl;
        cout << "No of Wheels: " << no_of_wheels << endl;
        cout << "No of Gears: " << no_of_gears << endl;
        cout << "Side Mirror: " << side_mirror << endl;
        cout << "----- END DISPLAY -----" << endl;
    }
};

int main(){
    cout << unitbuf;

    Car c1;
    c1.get();

    cout << endl << "----- START ENGINE -----" << endl;
    c1.start_engine();
    c1.AC();
    cout << "----- STOP ENGINE -----" << endl;
    c1.stop_engine();
    cout << endl;
    c1.display();

    fflush(stdout);
    cout << endl << "Press Enter to exit...";
    cin.ignore(10000, '\n');
    cin.get();
    return 0;
}