#include <stdio.h>

// void main()
// {
//     long nc;
//     nc = 0;
//     while (getchar()!='E')
//         ++nc;
//     printf("%ld\n", nc);
// }

void main()
{
    double nc;
    for (nc = 0; getchar() != '\n'; ++nc)
        ;
    printf("%.2f\n", nc);
}