#include <stdio.h>
void main ()
{
   int s;
    printf("Nhap so giay = \n");
    scanf("%d",&s);
    printf("%d gio",s/3600);
    s=s%3600;
    getch();
    return 0;
}
