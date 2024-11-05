#include <stdio.h>

// Definizione della macro CUBE
#define CUBE(num) ((num) * (num) * (num))

int main() {
    printf("CUBE(6) = %d\n", CUBE(6));           
    printf("CUBE(3 + 4) = %d\n", CUBE(3 + 4));   
    printf("CUBE(7) = %d\n", CUBE(7));           
    printf("CUBE(9 - 3) = %d\n", CUBE(9 - 3));   

    return 0;
}

