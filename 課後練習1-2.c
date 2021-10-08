#include <stdio.h>

int main()
{
   int n=0,m=0;
   scanf("%d",&n);
   if (n=1)
   {
       printf("%s","No\n");
       m=0;
   }
   else if (n%2==0)
   {
       printf("%s","No\n");
       m=1;
   }
   else
   {
       printf("%s","Yes\n");
       while (n%2!=0)
       {
           n=n/2;
           m++;
       }
   }
   
   printf("%d",m);
}