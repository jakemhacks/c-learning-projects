/********************************************************
 * Calculator
 * Author: Jake Murray
 * Date: 12\6\25
 * 
 * Description: My first C project outside of hello world
 * ******************************************************/

// stdio gives us our input/output functions
#include <stdio.h>

int main(void) {
    char oper;
    double arg1, arg2, result;

    printf("Enter an operator ( + - * or /): ");
    // get operator from user and store it to "oper" variable
    scanf("%c", &oper);

    printf("Enter two operands separated by a space (ex. 5 10): ");
    scanf("%ld %ld", &arg1 &arg2); 
