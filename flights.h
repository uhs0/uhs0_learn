#include <stdbool.h>
#include <stdio.h>

#define FLIGHTSEATS 12
#define FLIGHTS_ARRANGEMENT 1
#define NAMESIZE 40

struct flightseat
{
    unsigned int seatnumber;
    bool isoccupied;
    char firstname[NAMESIZE];
    char lastname[NAMESIZE];
};

void displaymenu();
void initializeseat(struct flightseat *planeonet);
char checkoperations();
void operation_a(const struct flightseat planeone[]);
void operation_b(const struct flightseat planeone[]);
void operation_c(const struct flightseat planeone[]);
void operation_d(struct flightseat planeone[]);
void operation_e(struct flightseat planeone[]);
void clientoperations(char choice, struct flightseat planeone[]);
