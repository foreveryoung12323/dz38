#include "Ticket.h"

int Ticket::counter = 0;

Ticket::Ticket(const string& dest, const string& name, const string& date)
    : destination(dest), passengerName(name), departureDate(date) {
    id = ++counter;
}

int Ticket::getId() const {
    return id;
}

string Ticket::getDestination() const {
    return destination;
}

string Ticket::getDate() const {
    return departureDate;
}

bool Ticket::operator<(const Ticket& other) const {
    if (destination == other.destination) {
        return departureDate < other.departureDate;
    }
    return destination < other.destination;
}

ostream& operator<<(ostream& os, const Ticket& ticket) {
    os << "ID: " << ticket.id
        << ", Destination: " << ticket.destination
        << ", Passenger: " << ticket.passengerName
        << ", Date: " << ticket.departureDate;
    return os;
}
