#include<stdio.h>
#include<math.h>
int main()
{
    int inputNum = 0;
    puts("Enter a number: ");
    scanf("%d",&inputNum);
    int root = floor(sqrt(inputNum));
    if(root*root == inputNum)
       printf("%d is a perfect square",inputNum);
    else
    printf("%d is not a perfect square",inputNum);   
}