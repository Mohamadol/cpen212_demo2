#include <stdlib.h>


void seg_fault_cause(){


    // Dynamically allocate space for 2 integers
    int *ptr = NULL;  // Initialize a pointer to NULL
    *ptr = 42;        // Attempt to write to the NULL pointer


}