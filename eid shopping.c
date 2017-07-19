#include <stdio.h>
int main ()
{
    int p,qu,v,dis;
    char item;
    float shirt_price,pant_price,shoes_price,belt_price,shocks_price,total_purchase,total_purchase_amount,vat,discount;
    printf("enter item name:")
    scanf("%s",&item);
    printf("enter the price of :");
    scanf("%d",&p);
    printf("enter the quantity of:");
    scanf("%d",&qu);
    shirt_price=p*qu;
    printf("shirt_price:%f",shirt_price);
    printf("\nenter the price of pant:");
    scanf("%d",&p);
    printf("enter the quantity of pant:");
    scanf("%d",&qu);
    pant_price=p*qu;
    printf("pant_price:%f",pant_price);
    printf("\nenter the price of shoes:");
    scanf("%d",&p);
    printf("enter the quantity of shoes:");
    scanf("%d",&qu);
    shoes_price=p*qu;
    printf("shoes_price:%f",shoes_price);
    printf("\nenter the price of belt:");
    scanf("%d",&p);
    printf("enter the quantity of belt:");
    scanf("%d",&qu);
    belt_price=p*qu;
    printf("belt_price:%f",belt_price);
    printf("\nenter the price of shocks:");
    scanf("%d",&p);
    printf("enter the quantity of:");
    scanf("%d",&qu);
    shocks_price=p*qu;
    printf("shocks_price:%f",shocks_price);
    total_purchase=shirt_price+pant_price+belt_price+shoes_price+shocks_price;
    printf("\ntotal_purchase:%f",total_purchase);
    if(total_purchase>10000)
    {
        printf("\ngift amount:1000");
        total_purchase=total_purchase-1000;
        printf("\ntotal_purchase:%f",total_purchase);
    }
    else
    {
        printf(" \ngift not abalvail");
    }
    printf("\nenter the vat persantge:");
    scanf("%d",&v);
    vat=(total_purchase/100)*v;
    printf("\nvat:%f",vat);
    printf("\nenter the discount persantage:");
    scanf("%d",&dis);
    discount=(total_purchase/100)*dis;
    printf("\ndiscount:%f",discount);
    total_purchase_amount=(total_purchase+vat)-discount;
    printf("\ntotal_purchase_amount:%f",total_purchase_amount);
    return 0;
}
