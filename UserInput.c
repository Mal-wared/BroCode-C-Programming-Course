#include <stdio.h>
#include <string.h>

int main()
{
    char name[15]; //bytes
    int age;

    printf("What's your name? (max 25 characters)\n");
    //scanf("%s", &name);
    fgets(name, 16, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}