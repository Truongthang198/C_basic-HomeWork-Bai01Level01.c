# C_basic-HomeWork-Bai01Level01.c
BT01:
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
BT02:
    #include <stdio.h>
    #include <math.h>
    void main ()
    {
    float a,b,c,p,S;
    printf("Nhap 3 canh cua tam giac:\n");
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
BT03:
   #include <stdio.h>
   #include <math.h>
   void main ()
   {
    float a,b,c,d,C,S;
    printf("Nhap do dai canh hinh vuong:\n");
    scanf("%f",&a);
    C=4*a;
    printf("Chu vi hinh vuong %f\n",C);
    S=a*a;
    printf("Dien tich hinh vuong %f\n",S);
    getch();
    return 0;
    }
BT04:
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
BT05:
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
BT06:
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
BT07:
    #include <stdio.h>
    void main ()
     {
    int ngay,thang,nam;
    printf("Nhap ngay: \n");
    scanf("%d",&ngay);
    printf("Nhap thang: \n");
    scanf("%d",&thang);
    printf("Nhap nam: \n");
    scanf("%d",&nam);
    printf("ngay %d thang %d nam %d",ngay,thang,nam);
    getch();
    return 0;
    }
