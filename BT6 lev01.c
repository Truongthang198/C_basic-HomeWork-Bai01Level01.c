#include <stdio.h>
#include <math.h>
#define Pi 3.14
void main ()
{
    float h,r,V;
    printf("Nhap cac gia tri:\n");
    scanf("%f",&h);
    scanf("%f",&r);
    V=h*Pi*r*r;
    printf("The tich hinh tru %f\n",V);
    getch();
    return 0;
}
