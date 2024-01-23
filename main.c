#include <stdio.h>
#include <stdlib.h>

void hello();
void bye();
void seg_fault_cause();

int main() {
    int a=10;
    
    hello();
    printf("This is the main\n");
    bye();

    for(int i=0; i<100; i++){
        a += i *2;
    }

    seg_fault_cause();

}