// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *word;
    int i, length;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    word = strtok(str, " \n");

    printf("Sentence after reversing each word:\n");

    while (word != NULL)
    {
        length = strlen(word);

        for (i = length - 1; i >= 0; i--)
        {
            printf("%c", word[i]);
        }

        word = strtok(NULL, " ");

        if (word != NULL)
        {
            printf(" ");
        }
    }

    return 0;
}