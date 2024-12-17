#include "functions.h"
#include <iostream>
using namespace std;

int main() {
    multiset<Ticket> tickets;
    int choice;

    do {
        cin >> choice;

        switch (choice) {
        case 1: addTicket(tickets); break;
        case 2: removeTicket(tickets); break;
        case 3: showTicketsByDestination(tickets); break;
        case 4: countTicketsByDateAndDestination(tickets); break;
        case 5: showAllTickets(tickets); break;
        case 0: break;
        }
    } while (choice != 0);

    return 0;
}
