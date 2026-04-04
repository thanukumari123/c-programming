#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int a=10,b=20;
    int max=(a+b+abs(a-b))/2;
    printf("Largest=%d",max);
    return 0;
}