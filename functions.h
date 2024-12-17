#pragma once
#include "Ticket.h"
#include <set>

void addTicket(multiset<Ticket>& tickets);
void removeTicket(multiset<Ticket>& tickets);
void showTicketsByDestination(const multiset<Ticket>& tickets);
void countTicketsByDateAndDestination(const multiset<Ticket>& tickets);
void showAllTickets(const multiset<Ticket>& tickets);
