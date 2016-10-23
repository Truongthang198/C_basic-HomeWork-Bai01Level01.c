#include <stdio.h>
#include <math.h>
#define Pi 3.14
void main ()
{
    float R;
    printf("Moi ban nhap vao R:");
    scanf("%f",&R);
    float C=2*R*Pi;
    printf("Chu vi hinh tron =%.2f\n",C);
    float S=R*R*Pi;
    printf("Dien tich hinh tron la =%.2f\n",S);
    getch();
    return 0;


}
