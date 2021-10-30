#include<stdio.h>
#include<conio.h>
void main()
{
    int idly=100,dosa=50,tea=50,vadai=200;
    int aidly,adosa,atea,avadai;
    int balidly,baldosa,baltea,balvadai;
    int skidly,skdosa,sktea,skvadai;
    int b2idly,b2dosa,b2tea,b2vadai;
    scanf("%d%d%d%d",&aidly,&adosa,&atea,&avadai);
    balidly=idly-aidly;
    printf("balance idly=%d\n",balidly);
    baldosa=dosa-adosa;
    printf("balance dosa=%d\n",baldosa);
    baltea=tea-atea;
    printf("balance tea=%d\n",baltea);
    balvadai=vadai-avadai;
    printf("balace vadai=%d\n",balvadai);
    scanf("%d%d%d%d",&skidly,&skdosa,&sktea,&skvadai);
    b2idly=balidly-skidly;
    printf("now idly=%d\n",b2idly);
    b2dosa=baldosa-skdosa;
    printf("now dosa=%d\n",b2dosa);
    b2tea=baltea-sktea;
    printf("now tea=%d\n",b2tea);
    b2vadai=balvadai-skvadai;
    printf("now vadai=%d\n",b2vadai);
    getch();
}

