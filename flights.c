#include <stdio.h>
#include <string.h>

#include "flights.h"

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

void initializeseat(struct flightseat *planeone)
{
    unsigned int seatnumber = 10000000;
    int count;

    for (count = 0; count < FLIGHTSEATS; count++, seatnumber++,planeone++)
    {
        planeone->seatnumber = seatnumber;
        planeone->isoccupied = false;
        planeone->firstname[0] = '\0';
        planeone->lastname[0] = '\0';
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
    while (getchar() != '\n')
        continue;
    return clientchoices;
}

void operation_a(const struct flightseat planeone[])
{
    unsigned int count;
    unsigned int emptyseats;
    printf("Empty seats number: ");
    for (count = 0, emptyseats = 0; count < FLIGHTSEATS; count++)
    {
        if (planeone[count].isoccupied == false)
            ++emptyseats;
    }
    printf("%d empty seats\n", emptyseats);
    displaymenu();
}

void operation_b(const struct flightseat planeone[])
{
    int count;
    printf("Empty seats:\n");
    for (count = 0; count < FLIGHTSEATS; count++)
    {
        if (planeone[count].isoccupied == false)
            printf("%-16u is available now.\n", planeone[count].seatnumber);
    }
    printf("\n");
    displaymenu();
}

void operation_c(const struct flightseat planeone[])
{
    int count;
    int booked_count;
    for (count = 0, booked_count = 0; count < FLIGHTSEATS; count++)
        if (planeone[count].isoccupied == true)
        {
            printf("%-16u has been booked.\n", planeone[count].seatnumber);
            booked_count++;
        }
    if (booked_count == 0)
        printf("All the seats is empty!\n");
    displaymenu();
}

void operation_d(struct flightseat planeone[])
{
    int count;
    char first_name[NAMESIZE];
    char last_name[NAMESIZE];
    printf("Please enter your name information, ");
    printf("with firstname ahead\n");
    while (scanf("%s %s", &first_name, &last_name) != 2)
    {
        printf("There is something wrong with your name informarion.\n");
        printf("please enter your name informarion again: ");
        while (getchar() != '\n')
            continue;
    }
    for (count = 0; count < FLIGHTSEATS; count++)
    {
        if (planeone[count].isoccupied == false)
        {
            strncat(planeone[count].firstname, first_name, strlen(first_name));
            strncat(planeone[count].lastname, last_name, strlen(last_name));
            planeone[count].isoccupied = true;
            printf("%s %s your seat number is %u\n", planeone[count].firstname, planeone[count].lastname, planeone[count].seatnumber);
            break;
        }
    }
    if (count == 12)
        printf("Flight seat is unavailable now.\n");
    while (getchar() != '\n')
        continue;
    displaymenu();
}

void operation_e(struct flightseat planeone[])
{
    int count;
    int booked_count;
    char first_name[NAMESIZE];
    char last_name[NAMESIZE];
    printf("Please enter you name information\n");
    while (scanf("%s %s", &first_name, &last_name) != 2)
    {
        printf("There is something wrong with your name informarion.\n");
        printf("please enter your name informarion again: ");
        while (getchar() != '\n')
            continue;
    }
    for (count = 0, booked_count = 0; count < FLIGHTSEATS; count++)
    {
        if (!strncmp(planeone[count].firstname, first_name, strlen(first_name)) && !strncmp(planeone[count].lastname, last_name, strlen(last_name)))
        {
            planeone[count].firstname[0] = '\0';
            planeone[count].lastname[0] = '\0';
            planeone[count].isoccupied = false;
            booked_count++;
            printf("We have cancel your book and delete your name information, ");
            printf("welcome your last next comming!\n");
        }
    }
    if (booked_count == 0)
        printf("Sorry, can't find you info!\n");
    while (getchar() != '\n')
        continue;
    displaymenu();
}

void clientoperations(char choice, struct flightseat planeone[])
{
    switch (choice)
    {
    case 'a':
        operation_a(planeone);
        break;
    case 'b':
        operation_b(planeone);
        break;
    case 'c':
        operation_c(planeone);
        break;
    case 'd':
        operation_d(planeone);
        break;
    case 'e':
        operation_e(planeone);
        break;
    }
}
