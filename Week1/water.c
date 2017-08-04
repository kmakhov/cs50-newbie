#include <cs50.h>
#include <stdio.h>
 
int main(void) 
{
    int i = get_int(); 
    if (i < 1) 
        printf("error\n");
    else
        printf("%i mins, %i bottles\n", i, i * 12);
    
}
