// This is a simple Wello World file for demo purposes.

#include <stdio.h>

int main(void)
{
    char user_name[50];
    printf("What is your name? ");
    scanf("%s", user_name);
    printf("Hello %s! Nice to meet you!\n", user_name);
    return 0;
}
