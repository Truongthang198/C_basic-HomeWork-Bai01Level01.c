#include <stdio.h>
#include <math.h>
void main ()
{
    float a,b,h,S;
    printf("Nhap cac gia tri:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&h);
    S=h*((a+b)/2);
    printf("Dien tich hinh thang %f\n",S);
    getch();
    return 0;
}
