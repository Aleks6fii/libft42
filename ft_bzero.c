#include <unistd.h>

void ft_bzero(void *dst, size_t n)
{
    unsigned char *temp;

    temp = (unsigned char *)dst;

    while (n != 0)
    {
        *temp++ = 0;
        n--;
    }
}

// #include <stdio.h>
// int main(void) {
//     char test[] = "khkgjekr";
//     ft_bzero(test, 1);
//     printf(test);
//     return 0;
// }
