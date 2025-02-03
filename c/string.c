#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "debottam kar";
    char ch = ' ';
    int asci = ch;
    int i, data;
    // printf("%d", asci);
    for (i = 0; i < sizeof(name) / sizeof(name[0]) - 1; i++)
    {
        if (i == 0)
        {
            data = (int)name[0] - 32;
            name[0] = (char)data;
        }
        if (name[i] == ' ')
        {
            // data = (int)name[i] - 32;
            // name[i] = (char)data;
            data = (int)name[i + 1] - 32;
            name[i + 1] = (char)data;
        }
        printf("%c", name[i]);
    }
    printf("\n");
    strcpy(name, "debottam kar");
    for (i = 0; i < sizeof(name) / sizeof(name[0]) - 1; i++)
    {
        if (name[i] != ' ')
        {
            data = (int)name[i] - 32;
            name[i] = (char)data;
        }
        printf("%c", name[i]);
    }
    return 0;
}