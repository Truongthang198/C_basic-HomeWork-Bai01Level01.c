#include <stdio.h>
#include <math.h>
void main ()
{
    float a,b,c,p,S;
    printf("Nhap 3 canh cua tam giac\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    p=(a+b+c);
    printf("Chu vi tam giac %f\n",p);
    p=p/2;
    printf("Dien tich tam giac %f\n",S);
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    getch();
    return 0;





}
