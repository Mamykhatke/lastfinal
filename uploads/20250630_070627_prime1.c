#include<stdio.h>
void main()
{
int n,k=0;
printf("enter any number to check it is prime or not");
scanf("%d",&n);
while(n>0)
{
   n=n/10.0;
   k=k+1;
 }
 if(k==2)
 {print("%d is prime",n);}
 else if(k==1)
 {printf("not prime");}
 }
