#include<stdio.h>
 int main()
 {
     int num, sum=0;

     printf("Enter Number: ");
     scanf("%d",&num);

     for(int i=1; i<=num/2; i++)
     {
         if(num%i==0)
             sum+=i;
     }

     if( sum==num )
         printf("%d is a perfect number.\n",num);
     else
         printf("%d is not a perfect number.\n",num);

     return 0;
 }

o/p:

Enter Number: 6
6 is a perfect number.
Enter Number: 5
5 is not a perfect number.
