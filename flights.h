#include <stdbool.h>

#define FLIGHTSEATS 12
#define FLIGHTS_ARRANGEMENT 1
#define NAMESIZE 40

struct flightseat;                                                                                
void displaymenu();
void initializeseat();
char checkoperations();
void operation_a();
void operation_b();
void operation_c();
void operation_d();
void operation_e();
void operation_f();
void clientoperations(char choices);
