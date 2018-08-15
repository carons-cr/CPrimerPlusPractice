#include <stdio.h>
void smile(void);

int main(void)
{
    for (int i = 0; i < 3; i++) 
    {
	for (int j = 3 - i; j > 0; j--)
	{
 	    smile();
	}
	printf("\n");
    }
    return 0;
}

void smile(void) 
{
    printf("Smile!");
}
