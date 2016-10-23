#include <stdio.h>
#include <math.h>
void main ()
{
    float a,b,C,S;
    printf("Nhap chieu dai a, chieu rong b:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    C=(a+b)*2;
    printf("Chu vi hinh chu nhat %f\n",C);
    S=a*b;
    printf("Dien tich hinh chu nhat %f\n",S);
    getch();
    return 0;
}
