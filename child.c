#include<stdio.h>
#include<conio.h>
void main()
{
int g[10],i,p=0;
clrscr();
printf("The rating of the children is equal to the number of candies\nThe ratings begins from 1 to n \nEnter the rating for 10 children: ");
for(i=0;i<=9;i++)
{
scanf("%d",&g[i]);
}
i=0;
while(g[i]!=0&&i<=9)
{
for(i=0;i<=9;i++)
{
p=p+a[i];
}
}
printf("The minimum no of candies is= %d",p);
getch();
}
