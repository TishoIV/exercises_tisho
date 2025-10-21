#include <iostream>
#include <math.h>

int main()
{
    int a, b, c;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Obrazuva triugulnik\n");
        

    }
    else {
        printf("Ne obrazuva triugulnik\n");
    }
    if (a == b && b == c) {
        printf("Ravnostranen triugulnik\n");
    }
    if ((a == b || b == c || a == c)) {
        printf("Ravnobedren triugulnik");
    }
    
}

