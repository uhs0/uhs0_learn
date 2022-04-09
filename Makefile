flightsbooking: flights.o flightsbook.o
	gcc -o flightbooking flights.o flightsbook.o 
flights.o: flights.h flights.c
	gcc -c flights.c
flightsbook.o: flights.h flightsbook.c 
	gcc -c flightsbook.c 
clean:
	rm -rf flights*.o
.PHONY: clean
            
