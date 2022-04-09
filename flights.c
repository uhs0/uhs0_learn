#include <stdio.h>

#include "flights.h"

struct flightseat
{
    unsigned int seatnumber;
    bool isoccupied;
    char firsrname[NAMESIZE];
    char lastname[NAMESIZE];
}planeone[12];

int global_number=1;

void displaymenu()
{
    printf("To choose a function,enter its letter label:\n");
    printf("a)Show number of empty seats\n");
    printf("b)Show list of empty seats\n");
    printf("c)Show alphabetical list of seats\n");
    printf("d)Assign a customer to a seat assignment\n");
    printf("e)Delete a seat seat assignment\n");
    printf("f)Quit\n");
}

void initializeseat()
{
    unsigned int seatnumber = 10000000;
    int count;
    for (count = 0; count < FLIGHTSEATS; count++, seatnumber++)
    {
        planeone[count].seatnumber=seatnumber;
        planeone[count].isoccupied=false;
    }
}

char checkoperations()
{
    char clientchoices;
    clientchoices = getchar();
    while (clientchoices < 'a' || clientchoices > 'f')
    {
        printf("Can't understand your meaning!\n");
        while (getchar() != '\n')
            continue;
        displaymenu();
        clientchoices = getchar();
    }
    return clientchoices;
}

void operation_a()
{
    unsigned int count;
    unsigned int emptyseats;
    printf("Empty seats number: ");
    for (count = 0, emptyseats = 0; count < FLIGHTSEATS; count++)
    {
        if (planeone[count].isoccupied == false)
            ++emptyseats;
    }
    printf("%d empty seats", emptyseats);
}

void operation_b()
{
    int count;
    printf("Empty seats:\n");
    for (count = 0; count < FLIGHTSEATS; count++)
    {
        if (planeone[count].isoccupied == false)
            printf("-10%d", planeone[count].seatnumber);
        if (count % 2 == 0)
            printf("\n");
    }
}

void operation_c()
{
    int count = 0;
    printf("Booked seats infomations:\n");
}

void operation_d()
{
}

void operation_e()
{
}

void operation_f()
{
    printf("Good Bye!");
}

void clientoperations(char choices)
{
    switch (choices)
    {
    case 'a':
        operation_a();
        break;
    case 'b':
        operation_b();
        break;
    case 'c':
        operation_c();
        break;
    case 'd':
        operation_d();
        break;
    case 'e':
        operation_e();
        break;
    case 'f':
        operation_f();
        break;
    default:
        break;
    }
}
