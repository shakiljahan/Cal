#include<stdio.h>
#include<math.h>
double a,b,c,squareRoot;
void square_root()
{
     printf("Enter a number: ");
   scanf("%lf", &a);

   squareRoot = sqrt(a);
   printf("Square root of %.2lf =  %.2lf", a, squareRoot);
return main();
}
void power() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    result = pow(base, exp);
    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
return main();
}
void add()
{
    printf("Enter the two numbers:");
    scanf("%lf%lf",&a,&b);
    c=a+b;
    printf("\n%.2lf+%.2lf= %.2lf",a,b,c);
    return main();
}
void sub()
{
    printf("Enter the two numbers:");
   scanf("%lf%lf",&a,&b);
    c=a-b;
     printf("\n%.2lf-%.2lf= %.2lf",a,b,c);
return main();
}
void mul()
{
    printf("Enter the two numbers:");
    scanf("%lf%lf",&a,&b);
    c=a*b;
     printf("\n%.2lfx%.2lf= %.2lf",a,b,c);
return main();
}
void div()
{
    printf("Enter the two numbers:");
    scanf("%lf%lf",&a,&b);
    c=a/b;
     printf("\n%.2lf/%.2lf= %.2lf",a,b,c);
return main();
}
int main()
{
    int ch;
     printf("\n 1.Add\n 2.Sub\n 3.Multi\n 4.Div\n 5.Power\n 6.Square Root\n 7.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            add();
               break;
        case 2:
            sub();
              break;
        case 3:
            mul();
               break;
        case 4:
            div();
              break;
        case 5:
            power();
            break;
        case 6:
            square_root();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\n indivalid choice:");
    }
}
