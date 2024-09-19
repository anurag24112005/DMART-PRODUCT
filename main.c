//
//  main.c
//  D-MART PRODUCTS
//
//  Created by Anurag Raj on 31/08/24.
//

#include <stdio.h>

int main(void)
{
    float sugar,salt,coffee,flour,Total;
    printf("Enter the price of sugar ");
    scanf("%f",&sugar);
    printf("Enter the price of salt ");
    scanf("%f",&salt);
    printf("Enter the price of coffee ");
    scanf("%f",&coffee);
    printf("Enter the price of flour ");
    scanf("%f",&flour);
    Total=sugar+salt+coffee+flour;
    printf("Total=%f",Total);
    return(0);
    
}
