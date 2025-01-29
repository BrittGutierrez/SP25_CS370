#include <stdio.h>

int main(){
    int x;
    int y; 

    printf("Enter first integer: "); 
    scanf("%d", &x); 
    printf("Enter second integer: "); 
    scanf("%d", &y);
    
    int total = x+y;
    printf("Sum: %d\n", total);
    return 0;

}