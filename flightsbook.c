#include <stdio.h>

#include "flights.h"

int main(int argc, char *argv[])
{
    extern int global_number;
    int local_number;
    local_number=global_number;


    char clientchoices;
    displaymenu();
    initializeseat();
    clientchoices = checkoperations();
    clientoperations(clientchoices);
}