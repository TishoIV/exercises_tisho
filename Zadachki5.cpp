#include <stdio.h>
#include <iostream>

int main()
{
    int num;
    int num2 = 0;
    printf("Vuvedi chislo: ");
    scanf_s("%d", &num);
    while (num != 0) {
        if (num % 7 == 0)
            num2 = 1;
        printf("Vuvedi chislo:", num2);
            scanf_s("%d", num);

    }
    if (num2) {
        printf("Ima chislo koeto se deli na 7");

    }
    else
        printf("Nqma chislo koeto se deli na 7");
       

}

