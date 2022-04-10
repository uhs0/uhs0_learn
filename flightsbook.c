#include <stdio.h>

#include "flights.h"

int main(int argc, char *argv[])
{
    char clientchoices;
    struct flightseat plane_one[FLIGHTSEATS];
    struct flightseat *planeone=plane_one;

    displaymenu();
    initializeseat(planeone);

    while ((clientchoices = checkoperations()) != 'f')
        clientoperations(clientchoices, plane_one);

    printf("Good bye!");
}