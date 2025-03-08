#include<stdio.h>>
int main()
{
    char c;
    int i;
    char*pc = (char*) &i;
    int*pi = (int*) &c;
    printf("%u %u \n",pc,pi);
    printf("%u %u \n",pc,pi);
}