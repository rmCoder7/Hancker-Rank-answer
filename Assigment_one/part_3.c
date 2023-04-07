



#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 0 && N <= 1000)
    {

        for (int i = 1; i <= N; i++)
        {
            if (i % 3 == 0 && i % 7 == 0 )
            {
                printf("%d\n", i);
            }
           
        }
    }
    return 0;
}