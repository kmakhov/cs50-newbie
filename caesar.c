#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
                        
int main(int argc, string argv[])
{
    bool n = false;
    int key = 0;
    int len = 0;
    string text = "";
    do
    {
        if(argc != 2)
        return 1;
        else
        {
            key = atoi(argv[1]);
            n = true;
        }
    }
    while(!n);
    text = get_string();
    len = strlen(text);
    for(int i = 0; i < len; i++)
    {
        if(isalpha(text[i]))
        {
            if(islower(text[i]))
            {
                printf("%c", ((((text[i] - 97)+key)%26)+97));
            }
            else
            {
                printf("%c", ((((text[i] - 65)+key)%26)+65));
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;  
}
