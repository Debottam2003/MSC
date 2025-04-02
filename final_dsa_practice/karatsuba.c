#include <stdio.h>
long long int power(int pow){
    long long int power = 1;
    for(int i = 1 ; i <= pow; i++){
        power *= 10;
    }
    return power;
}
long long int karatsuba(long long int a, long long int b){
    long long int result = 0;
    int len1 = 0, len2 = 0;
    if(a < 10 || b < 10){
        return a * b;
    }
    int x = a;
    int y = b;
    while(x > 0){
        x /= 10;
        len1++;
    }
    while(y > 0){
        y /= 10;
        len2++;
    }
    int n = len1 > len2 ? len1 : len2;
    long long int p = a / power(n / 2);
    long long int q = a % power(n / 2);
    long long int r = b / power(n / 2);
    long long int s = b % power(n / 2);
    long long int ac = karatsuba(p, r);
    long long int bd = karatsuba(q, s);
    long long int ab_cd = karatsuba(p + q, r + s);
    result = ac * power(n) + (ab_cd - ac - bd) * power(n / 2) + bd;
    return result;
}
int main() {
    long long int num1, num2;
    printf("Enter the first number: ");
    scanf("%lld", &num1);
    printf("Enter the second number: ");
    scanf("%lld", &num2);
    long long int res = karatsuba(num1, num2);
    printf("The result is: %lld", res);
    return 0;
}