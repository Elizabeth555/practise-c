#include <stdio.h>

int main (void)
{
    int height;
    int spaces;
    int dashes;

do
    {
    printf ("Give me a positive number\n");
    height = GetInt ();
    }
while (height <0 || height > 23);

for (int i= 0; i< height; i ++)
{
    for (spaces = (height - 1); spaces > i ; spaces --)
    {
        printf(" ");
    }

    for (dashes = 0 ; dashes <= (i+1); dashes ++)
    {
        printf("#");
    }

printf("\n");
}
}
