#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    for (int i=0, n=strlen(s); i < n; i++)
    {
        if (s[i] == ' ')
        {
            while(s[i] == ' ')
            {
                i++;
            }
            printf("%c", toupper(s[i]));

        }
        if (s[0]!=' ')
            {
                printf("%c", toupper(s[0]));
                for ( i = 0; i < n; i++)
                {
                    if (s[i] == ' ')
                        {
                            while(s[i] == ' ')
                            {
                                i++;
                            }
                        printf("%c", toupper(s[i]));

                        }
                } 

            }
    }
    printf("\n");
    return 0;
}
