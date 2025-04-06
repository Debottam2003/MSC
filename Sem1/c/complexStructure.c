#include <stdio.h>

struct Student {
    char name[50];
    int roll;

    struct Address {
        char city[50];
        int zip;
    } addr;  // Nested structure variable inside `Student`
};

int main() {
    struct Student student1 = {"Alice", 101, {"New York", 10001}};

    printf("Name: %s\n", student1.name);
    printf("Roll: %d\n", student1.roll);
    printf("City: %s\n", student1.addr.city);
    printf("ZIP Code: %d\n", student1.addr.zip);

    return 0;
}
