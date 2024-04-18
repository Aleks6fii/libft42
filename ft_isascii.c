#include <unistd.h>
// #include <stdio.h>

int ft_isascii(char *str)
{
    char *next;
	next = str + 1;
	if (*str >= 0 && *str <= 127)
    {
		if (*next == '\0') 
            return (1);
        else 
            return (0);
    }
}

// int main(void) {
//     char ch[] = "jhd";
//     int res = ft_isascii(ch);
//     printf("%d", res);
//     return (0);
// }