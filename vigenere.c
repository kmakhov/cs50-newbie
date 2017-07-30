nclude <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            return 1;
        }
    }
    string key = get_string();
    int j = 0;
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        j = j % strlen(argv[1]);
        if (isalpha(key[i]))
        {
            if (islower(key[i]) && islower(argv[1][j]))
                printf("%c", (((key[i] - 97) + (argv[1][j] - 97)) % 26) + 97);
            else if (isupper(key[i]) && islower(argv[1][j]))
                printf("%c", (((key[i] - 65) + (argv[1][j] - 97)) % 26) + 65);
                else if (islower(key[i]) && isupper(argv[1][j]))
                    printf("%c", (((key[i] - 97) + (argv[1][j] - 65)) % 26) + 97);
                    else if (isupper(key[i]) && isupper(argv[1][j]))
                        printf("%c", (((key[i] - 65) + (argv[1][j] - 65)) % 26) + 65);
            j++;
        }
        else
        {
            printf("%c", key[i]);
        }
    }
    printf("\n");
}
