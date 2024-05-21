/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:52:12 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/12 20:21:47 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	trg;

	count = 0;
	trg = 0;
	while (*str)
	{
		if (*str != c && trg == 0)
		{
			trg = 1;
			count += 1;
		}
		else if (*str == c)
			trg = 0;
		str++;
	}
	return (count);
}

static char	*putword(char const *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (i + start < end)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_str(char **string, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(string[i]);
		i++;
	}
	free(string);
	return (NULL);
}

static void	*if_alloc_fail(char **smth)
{
	if (!smth)
		return (NULL);
	else
		return (smth);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	// printf("count words is %d \n", count_words(s, c)); // count words OK
	result = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if_alloc_fail(result);
	//
	// printf("c is %s \n", c);
	// printf("last char is %s \n", s[-1]); // null term OK
	// int t = (s[-1] == c);
	// printf("test %d \n", t);
	//
	// printf("strlen s is: %d \n", ft_strlen(s));
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start >= 0)
		{
			result[j] = putword(s, start, i);
			if (!(result[j]))
				return (free_str(result, j));
			start = -1;
			j++;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}


// #include <string.h>
// #include <stdio.h>

// int main(void) {

// 	// char **tab = ft_split("  tripouille  42  ", ' ');
// 	char **tab = ft_split("tripouille", 0); 
// 	int i = 0;
//     while (tab[i] != NULL) {  // null-term is OK 
//         printf("%s\n", tab[i]);
//         i++;
//     }

// 	return 0;
// }

