#include<stdio.h>

int main()
{
    double n1, n2, n3;

    printf("Enter the three Number : ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
        printf("The greater number is :%.2f\n ", n1);

    else if (n2>n1 && n2>n3)
        printf("the greater number is : %.2f\n", n2);


    else
        printf("The greater number is : %.2f\n ", n3);


    return 0;

}
