#include<stdio.h>
int main()
{
    int qty;
    float price,total;
    printf("Enter price per kg:");
    scanf("%f",&price);
    printf("Enter quantity (kg):");
    scanf("%d",&qty);
    total=price*qty;
    printf("Total cost = %.2f",total);
    return 0;
}