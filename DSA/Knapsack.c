#include<stdio.h>
int main(){
    int profit[] = {60, 100, 200};
    int weight[] = {10, 20, 30};
    float p_w[sizeof(profit) / sizeof(profit[0])];
    int capacity = 50;
    int i;
    for(i = 0; i < sizeof(profit) / sizeof(profit[0]); i++){
        p_w[i] = profit[i] / weight[i];
    }
    for(i = 0; i < sizeof(profit) / sizeof(profit[0]); i++){
        
    }
}