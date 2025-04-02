#include <stdio.h>
int countOne(int number){
    int count = 0;
    for(int i = 3; i >= 0; i--){
        if((number >> i) & 1){
            count++;
        }
    }
    return count;
}
int bitFlips(int prev, int next){
    int xorRes = prev ^ next;
    int flips = countOne(xorRes);
    return flips;
}
int main()
{
    int num = 16;
    int ci[16] = {0};
    int ti[16] = {0};
    int ai[16] = {0};
    ci[0] = 0;
    ti[0] = 0;
    ai[0] = 0;
    for (int i = 0; i < num; i++)
    {
        printf("%2d:",i);
        ci[i] = countOne(i);
        for (int j = 3; j >= 0; j--)
        {
            printf("%2d", (i >> j) & 1);
        }
        printf("\n");
    }
    printf("ci array: ");
    for (int i = 1; i < num; i++) {
        printf("%d ", ci[i]);
    }
    printf("\n");
    for(int i = 1; i < num; i++){
        ti[i] = bitFlips(i - 1, i);
    }
    printf("ti array: ");
    for (int i = 1; i < num; i++) {
        printf("%d ", ti[i]);
    }
    printf("\n");
    for(int i = 1; i < num; i++){
        ai[i] = ti[i] + ci[i] - ci[i - 1];
    }
    printf("ai array: ");
    for (int i = 1; i < num; i++) {
        printf("%d ", ai[i]);
    }
    printf("\n");
    printf(" Integer  ti  ci  ai\n");
    for(int i = 0; i < num; i++){
        for(int j = 3; j >= 0; j--){
            printf("%2d", (i >> j) & 1);
        }
        printf("%3d %3d %3d", ti[i], ci[i], ai[i]);
        printf("\n");
    }
    return 0;
}