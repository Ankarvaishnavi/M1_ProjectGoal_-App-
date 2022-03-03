/**
 * @file operations.c
 * @author Vaishnavi Ankar (vaishnaviankar2@gmail.com)
 * @brief To write the operations for the calculator
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "operation.h"
/**
 * @brief To write addition operation
 * 
 */
void addition(){
    printf("Enter the numbers you want to add: ");
    int number1, number2;
    scanf("%d%d",&number1, &number2);
    printf("The sum of number1 and number2 is %d\n", number1+number2);
}
/**
 * @brief To write substraction operation
 * 
 */
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int number1, number2;
    scanf("%d%d",&number1, &number2);
    printf("The subtraction of number1 and number2 is %d\n", number1-number2);
}
/**
 * @brief To write multiplication operation
 * 
 */
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int number1, number2;
    scanf("%d%d", &number1, &number2);
    printf("The multiplication of number1 and number2 is: %d\n", number1*number2);
}
/**
 * @brief To write division operation
 * 
 */
void division(){
    printf("Enter the numbers you want to divide: ");
    int number1, number2;
    scanf("%d%d", &number1, &number2);
    printf("The division of number1 and number2 is: %f\n", (float)number1/(float)number2);
}
/**
 * @brief To write modulus operation
 * 
 */
void modulus(){
    printf("Enter the numbers you want to find module of: ");
    int number1, number2;
    scanf("%d%d", &number1, &number2);
    printf("The modulus of number1 and number2 is: %d\n", number1%number2);
}
/**
 * @brief To write factorial operation
 * 
 */
void factorial(){
    int n, factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    if(n<0)
    factorial= 0;
    else{
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}}
/**
 * @brief To write power operation
 * 
 */
void p0wer(){
    double base;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf", &base, &p);
    double e=pow(base,p);
    printf("The power is %lf", e);
}
/**
 * @brief To write square operation
 * 
 */
void square(){
    double b;
    printf("Enter the number you want a square of: ");
    scanf("%lf", &b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
/**
 * @brief To write cube operation
 * 
 */
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
/**
 * @brief To write squareroot operation
 * 
 */
void squareroot(){
    double b;
    printf("Enter the number you want the squareroot of: ");
    scanf("%lf",&b);
    double s= sqrt(b);
    printf("The squareroot of %lf is %lf",b,s);
}