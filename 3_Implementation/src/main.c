/**
 * @file main.c
 * @author vaishnavi ankar (vaishnaviankar2@gmail.com)
 * @brief To make a scientific calculator for doing some mathematical operations
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "operation.h" // Prefered for user header files


void main(){
/**
 * @brief To take input from the user
 * 
 */
    
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\t\t***Press 0 to quit the program***\n\n");
    printf("\n Select the operation to be performed\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Power\n7.Factorial\n8.Square\n9.Cube\n10.Squreroot\n\n");


    while(1){
       printf("\n Enter the operation you want to do: "); 
    
    scanf("%d",&choice);

    switch(choice){
        case 1:
        addition();
        break;
        case 2:
        subtraction();
        break;
        case 3:
        multiplication();
        break;
        case 4:
        division();
        break;
        case 5:
        modulus();
        break;
        case 6:
        p0wer();
        break;
        case 7:
        factorial();
        break;
        case 8:
        square();
        break;
        case 9:
        cube();
        break;
        case 10:
        squareroot();
        case 0:
        exit(0);
        default:
        printf("Error! Enter the valid operation");
    }
}
}
