#include <iostream>
#include <math.h>

int main()
{
    int a, b, c;
    double d, x1, x2;
    printf("\n a=");
    scanf_s("%lf", &a);
    printf("\n b=");
    scanf_s("%lf", &b);
    printf("\n c=");
    scanf_s("%lf", &c);
    
    if (a) {
        d = (b * b + 4 * a * c);

        if (d < 0) printf("Nqma realni koreni");
        else
            if (d)
            {
                x1 = -b / (2 * a);
                printf("\n Edin dvoen koren x=%f", x1);

            }
            else
            {
                x1 = (-b + sqrt(d) / (2 * a));
                x1 = (-b - sqrt(d) / (2 * a));
                printf("\n Korenite na uravnenieto sa:%f, %f", x1, x2);

            }
    }
    else printf("Lineino uravnenie");
}

