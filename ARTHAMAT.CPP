#include<stdio.h>
#include<conio.h>

void main()
{
   int input1,input2,output1,output2,output3,output4,output5;
   clrscr();
   printf("enter the input =");
   scanf("%d%d",&input1,&input2);
   // printf("enter the input2=");
   // scanf("%d",&input2);
   output1=input1+input2;
   printf("sum of values are=%d\n",output1);
   output2=input1-input2;
   printf("sub of values are=%d\n",output2);
   output3=input1*input2;
   printf("multiplication of the numbers=%d\n",output3);
   output4=input1/input2;
   printf("division of two numbers=%d\n",output4);
   output5=input1%input2;
   printf("mod of two numbers=%d\n",output5);
   getch();
}

