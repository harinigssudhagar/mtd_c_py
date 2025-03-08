#include<stdio.h>
int main()
{
    int number=0,i,sol;
    puts("enter a number to print math table:");
    scanf("%d",&number);

    for(i=1;i<=10;i++)
    {
        printf("%d * %2d = %3d\n",number,i,number*i);
    }
    
}