#include <stdio.h>
int main(){
    char grade;
    printf("Please enter your grade> ");
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        case 'a':
            printf("Excellent");
            break;
        case 'B':
        case 'b':
            printf("Good");
            break;
        case 'C':
        case 'c':
            printf("O.K.");
            break;
        case 'D':
        case 'd':
        case 'F':
        case 'f':
            printf("Poor, student is on probation");
            break;
        default:
            printf("Invalid letter grade");
    }
    return(0);
}