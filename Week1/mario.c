#include <cs50.h>
#include <stdio.h>

int main(void) 
{
	int height = 0;
	do 
	{
		printf("Height:");
		height = get_int();
        if (height <= 0 || height >=23 )
        {
        	printf("error\n");
        }
	}
	while (height < 1 || height > 23);
	for(int row = 0; row < height; row++) 
	{
        for(int space = 0; space < height-row-1; space++)
        {
            printf(" ");
        }
		for(int hashtag = 0; hashtag < row+2; hashtag++)
		{
			printf("#");
		}
		printf("\n");
	}	
}
