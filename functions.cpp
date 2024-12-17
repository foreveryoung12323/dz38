#include "functions.h"
#include <iostream>
#include <algorithm>
using namespace std;

void addTicket(multiset<Ticket>& tickets) {
    string destination, passenger, date;
    cin >> destination;
    cin.ignore();
    getline(cin, passenger);
    cin >> date;

    tickets.emplace(destination, passenger, date);
}

void removeTicket(multiset<Ticket>& tickets) {
    string destination, date;
    cin >> destination >> date;

    auto it = find_if(tickets.begin(), tickets.end(), [&](const Ticket& ticket) {
        return ticket.getDestination() == destination && ticket.getDate() == date;
        });

    if (it != tickets.end()) {
        tickets.erase(it);
    }
}

void showTicketsByDestination(const multiset<Ticket>& tickets) {
    string destination;
    cin >> destination;

    for (const auto& ticket : tickets) {
        if (ticket.getDestination() == destination) {
            cout << ticket << endl;
        }
    }
}

void countTicketsByDateAndDestination(const multiset<Ticket>& tickets) {
    string destination, startDate, endDate;
    cin >> destination >> startDate >> endDate;

    int count = count_if(tickets.begin(), tickets.end(), [&](const Ticket& ticket) {
        return ticket.getDestination() == destination &&
            ticket.getDate() >= startDate &&
            ticket.getDate() <= endDate;
        });

    cout << count << endl;
}

void showAllTickets(const multiset<Ticket>& tickets) {
    for (const auto& ticket : tickets) {
        cout << ticket << endl;
    }
}
