// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char longest[100] = "";
    char *word;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    word = strtok(str, " \n");

    while (word != NULL)
    {
        if (strlen(word) > strlen(longest))
        {
            strcpy(longest, word);
        }

        word = strtok(NULL, " \n");
    }

    printf("Longest word = %s", longest);

    return 0;
}