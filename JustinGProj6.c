#include <stdio.h>
#include <stdlib.h>

void addParityBit(void);

int main() 
{
    printf("\nJustin Garcia - Project 6: Adding Parity Bit\n\n"); 
    addParityBit();
    printf("\nJustin Garcia - Project 6: End of Program\n\n");

    return 0;
}

void addParityBit(void)
{
    int i, j, sum;
    int bitArr[12][9];

    for(i = 0; i < 12; i++ )
    {
        sum = 0;
        for(j = 0; j < 8; j++) 
        {
            bitArr[i][j] = rand() % 2;
            sum += bitArr[i][j];
            printf("%d ", bitArr[i][j]);
        }
        if(sum % 2 == 0) 
        {
            printf("  0\n"); 
        }
        else 
        {
            printf("  1\n");
        }
    }
}
