#include<stdio.h>
#include<conio.h>
void main()
{
    int count=0;
long long i;
printf("Enter the number : ");
scanf("%lld",&i);
while(i!=0)
{
count++;
i=i/10;
}
printf("The count of the number is %d",count);
getch();
}
