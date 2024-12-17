#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ticket {
private:
    static int counter;
    int id;
    string destination;
    string passengerName;
    string departureDate;

public:
    Ticket(const string& dest, const string& name, const string& date);
    int getId() const;
    string getDestination() const;
    string getDate() const;
    bool operator<(const Ticket& other) const;
    friend ostream& operator<<(ostream& os, const Ticket& ticket);
};
