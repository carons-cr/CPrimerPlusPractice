//fathomToFeet_2_2.c --把2英寻转换成英尺
#include <stdio.h>

int main(void)
{
    int fathoms, feet;
    fathoms = 2;
    feet = 6*fathoms;
    
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6*fathoms);

    return 0;
}
