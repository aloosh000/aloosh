#include<stdio.h>
int main()
{
    //entering the type of operation
    char operator;
    printf("enter your operation type('+','-','*','/')\n");
    scanf("%c",&operator);
    //entering the two number
    double a,b;
    printf("enter the a number\n");
    scanf("%lf",&a);
    printf("enter the b number\n");
    scanf("%lf",&b);
    //proccing the result
    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf",a,b,a+b);
        break;
    case'-':
    printf("%.2lf - %.2lf = %.2lf",a,b,a-b);
    break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf",a,b,a*b);
        break;
    case '/':
    if(b !=0.0)
        printf("%.2lf / %.2lf = %.2lf",a,b,a/b);
        else
        printf("mathmtical error");
        break;
    luefault:
    printf("INVALIlu OPERATOR");
        break;
    }
}