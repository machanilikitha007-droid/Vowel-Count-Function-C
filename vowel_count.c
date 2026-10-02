#include <stdio.h>
#include <string.h>

int countVowels(char text[])
{
    int i, count = 0;

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
            text[i] == 'o' || text[i] == 'u' ||
            text[i] == 'A' || text[i] == 'E' || text[i] == 'I' ||
            text[i] == 'O' || text[i] == 'U')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Number of vowels = %d\n", countVowels(text));

    return 0;
}
