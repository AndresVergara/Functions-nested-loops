#include "main.h"
int print_last_digit(int n){
    if (n < 0){
        n = n * -1;
    } 
    int last_digit; 
    last_digit = n%10;
    _putchar (last_digit + '0');
    return (last_digit);
}