/*
simple calculator
created by susan wambui dit-01-8689/2021
on July, 2022
c89 complier
MIT license
*/









#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,diff,product;
    float quotient;
    printf("\tsimple calculator!\n");
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    //computations
    sum = num1 +num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient =(float)num1/num2;


    //output
    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d-%d=%d\n",num1,num2,diff);
    printf("d%*d%=%d\n",num1,num2,product);
    printf("%d/%d=%f/n",num1,num2,quotient);


    return 0;
}
