#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    double r = 0;
    double k = 0;
    double t = 0;

    printf("Kerem a kor sugarat: ");
    scanf("%1.lf ",&r);

    k = 2*r*PI;
    t = r*r*PI;
    printf("A kor terulete: %.2lf \n es a kor kerulete: %.2lf \n",t,k);





    return 0;
}
