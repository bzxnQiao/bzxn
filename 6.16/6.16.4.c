#include <stdio.h> 
int main(void)
{
    char ch = 'A';
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++,ch++)
        {
                printf("%c",ch);
        }
        putchar('\n');
    }
    return 0;
}