/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:47:37 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/12 18:40:23 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char const *set, char c);
static char	*trimmed(char const *str, size_t start, size_t end);


char	*ft_strtrim(char const *s1, char const *set)
{
	int	l;
	int	r;

	l = 0;
	r = ft_strlen(s1) - 1;
	if (r + 1 == 0)
		return (ft_strdup(""));
	while (trim(set, s1[l])) 
		l++;
	while (trim(set, s1[r]))
		r--;
	if (l > r)
		return (ft_strdup(""));
	else
		return (trimmed(s1, l, r));
}

static int	trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*trimmed(char const *str, size_t start, size_t end)
{
	char	*pt;
	size_t	i;

	pt = malloc(end - start + 2); 
	if (!pt) 
		return (NULL);
	i = 0;
	while (i <= end - start)
	{
		pt[i] = str[start + i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}

// #include <string.h>
// #include <stdio.h>
// int main(void) {
// 	// char *s = ft_strtrim("   xxxtripouille", " x");
// 	// char *s = ft_strtrim("   xxxtripouille   xxx", " x");
// 	// char *s = ft_strtrim("   xxx   xxx", " x");
//     // int tst = strcmp(s, "tripouille");
// 	char *s = ft_strtrim("abcdba", "acb");
// 	int tst = strcmp(s, "d");
// 	printf("%s \n", s);
// 	printf("%d \n", tst);
// 	return 0;
// }