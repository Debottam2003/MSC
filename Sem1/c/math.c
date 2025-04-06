#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double num, result;

    num = 9.0;

    // Calculate square root
    result = sqrt(num);
    printf("Square root of %.2f is %.2f\n", num, result);

    // Calculate power
    result = pow(num, 2);
    printf("%.2f raised to the power 2 is %.2f\n", num, result);

    // Calculate sine
    result = sin(num);
    printf("Sine of %.2f is %.2f\n", num, result);

    // Calculate cosine
    result = cos(num);
    printf("Cosine of %.2f is %.2f\n", num, result);

    // Calculate tangent
    result = tan(num);
    printf("Tangent of %.2f is %.2f\n", num, result);

    // Generate random number
    // Seed the random number generator with the current time
    printf("%d\n", time(0));
    // Get the current time
    time_t currentTime = time(NULL);

    // Convert it to local time format
    struct tm *localTime = localtime(&currentTime);
    
    // Display the current date and time
    printf("Current Date and Time: %02d-%02d-%04d %02d:%02d:%02d\n",
           localTime->tm_mday,
           localTime->tm_mon + 1,     // Months are 0-based in struct tm
           localTime->tm_year + 1900, // Years since 1900
           localTime->tm_hour,
           localTime->tm_min,
           localTime->tm_sec);
    srand(time(0));
    // Generate a random number within a specific range (e.g., 1 to 100)
    int lower = 1, upper = 100;
    int randomInRange = (rand() % (upper - lower + 1)) + lower;
    printf("Random number between %d and %d: %d\n", lower, upper, randomInRange);

    return 0;
}