#include <stdio.h>

void main()
{
    int i = 2, j = 2;
    while (i + 1 ? --i : j++)
        printf("%d", i);        // Ans: 1
}
