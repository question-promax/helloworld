#include<stdio.h>
#include<math.h>

int main ()
{   int a,sum=0; 
    do{
    scanf("%d", &a);
    if(a%2==1)
    {
        sum=sum+a;
    }
    }
    while(a>0);
 printf("%d",sum);
        return 0;
}