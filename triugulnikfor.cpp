#include <stdio.h>
#include <iostream>

int main()
{
    int i, j, n, m;
    for (i = 1; i<=6; i++) {
        for (j=6; j>=i; j--) 
        {
			printf(" ");

        }
        for(n=1; n<=i; n++)
        {
			printf("%d", n);
		}
		printf("\n");
    }
}


