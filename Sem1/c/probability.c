#include<stdio.h>
int main(){
    float dice;
    float probability = 1.0 / 6.0;
    printf("Enter the side of the dice you want...\n");
    scanf("%f", &dice);
    printf("The probability of getting %f is %f", dice, probability);
    return 0;
}