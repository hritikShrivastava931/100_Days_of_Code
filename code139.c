#include <stdio.h>

int main() {

    enum Colors { RED, GREEN = 5, BLUE, YELLOW = 10, ORANGE };

    printf("Enum values:\n");
    printf("RED = %d\n", RED);     
    printf("GREEN = %d\n", GREEN);   
    printf("BLUE = %d\n", BLUE);    
    printf("YELLOW = %d\n", YELLOW); 
    printf("ORANGE = %d\n", ORANGE); 

    return 0;
}
