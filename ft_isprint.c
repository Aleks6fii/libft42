#include <unistd.h>

int ft_isprint(char *str)
{
    char *next;
	next = str + 1;
	if (*str >= 32 && *str <= 126)
    {
		if (*next == '\0') 
            return (1);
        else 
            return (0);
    }
}