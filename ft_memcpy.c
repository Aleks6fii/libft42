#include <unistd.h>

void ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *temp_dst;
    unsigned char *temp_src;

    temp_dst = (unsigned char *)dst;
    temp_src = (unsigned char *)src;

    while (n != 0)
    {
        *temp_dst = *temp_src;
        temp_dst++;
        temp_src++;
        n--;
    }
}

// #include <stdio.h>
// int main(void) {
//     char test[] = "khkgjekr";
//     char c[] = "hello";
//     ft_memcpy(test, c, 5);
//     printf("", test);
//     return 0;
// }
