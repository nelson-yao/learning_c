#include <stdio.h>
/* print temperature using for loop*/
#define UPPER 300
#define LOWER 0
#define STEP 20
int main()
{
    int fahr;
    for (fahr = UPPER; fahr >=LOWER; fahr=fahr-STEP)
        printf("%3d\t%3.6f\n", fahr, 5.0/9.0*(fahr-32));
}