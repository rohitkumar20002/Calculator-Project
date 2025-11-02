#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b;
int choice;
int result;
clrscr();
printf("=====Calculator Program =====\n");
printf("Choose an operation:\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Less than\n");
printf("6.Greater than\n");
printf("7.Equal to \n");
printf("8.Logical AND\n");
printf("9.Logical OR\n");
printf("10.Logical NOT\n");
printf("Enter your choice:");
scanf("%d",&choice);

if(choice>=1&&choice<=9)
{
printf("Enter two number:");
scanf("%d %d",&a,&b);
}
else if (choice==10)
{
printf("Enter one number:");
scanf("%d",&a);
}
switch(choice)
{
case 1:
result=a+b;
printf("result = %d\n",result);
break;

case 2:
result=a-b;
printf("result=%d\n",result);
break;

case 3:
result=a*b;
printf("result=%d\n",result);
break;

case 4:
if(b!=0)
printf("result=%d \n",a/b);
else
printf("Error:Division by zero not allowed\n");
break;

case 5:
printf("result=%d\n",a<b);
break;

case 6:
printf("result=%d\n",a>b);
break;

case 7:
printf("result=%d\n",a==b);
break;

case 8:
printf("result=%d\n",a&&b);
break;

case 9:
printf("result=%d\n",a||b);
break;

case 10:
printf("result=%d\n",!a);
break;;

default:
printf("invalid choice!\n");
}
getch();
 return 0;
}