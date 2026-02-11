#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value in A:");
    scanf("%d",&a);
    printf("enter the value in B:");
    scanf("%d",&b);
    printf("enter the value in C:");
    scanf("%d",&c);
    int ab=a+b;
    int bc=b+c;
    int ca=c+a;
    if(ab==10||bc==10||ca==10)
    {
        printf("10");
    }
    else if(a>b||b>c||c>a)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}
