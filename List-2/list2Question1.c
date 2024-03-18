#include <stdio.h>

int main() {

    int n;
    
    scanf("%d", &n);

    if(n > 0) 
    {
        printf("Maior do que zero");
    }
    else if (n < 0)
    {
        printf("Menor do que zero");
    }
    else 
    {
        printf("Zero");
    }
    
    return 1;
}