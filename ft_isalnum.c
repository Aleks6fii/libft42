#include <unistd.h>
// #include <stdio.h>

int ft_isalnum(char *str)
{
    char *next;
	next = str + 1;
	if ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
    {
		if (*next == '\0') 
            return (1);
        else 
            return (0);
    }
}

// int main(void) {

//     char test[] = "5";
//     // char test = '7';
//     int res = ft_isalnum(&test);
//     printf("%d", res);

//     return(0);
// }