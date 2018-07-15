#include <stdio.h>

int calcul(int a, char operation, int b){
    if (operation == '/') {
        return a / b;
    } else if(operation == 'x'|| operation == 'X' || operation == '*') {
        return a * b;
    } else if(operation == '+') {
        return a + b;
    } else if(operation == '-') {
        return a - b;
    } else {
        printf("Erreur\n");
        return -1;
    }  
}