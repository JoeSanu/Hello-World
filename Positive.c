#include<stdio.h>
void main()
{
int num;
printf("Enter the Number:");
scanf("%d",&num);
if(num==0)
{
printf("The Entered Number is Zero.");
}
else if(num<=0.0)
{
printf("The Entered Number is Negative.");
}
else
{
printf("The Entered Number is Positive.");
}
