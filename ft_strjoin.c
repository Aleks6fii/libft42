/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:36:51 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/12 18:37:07 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		i;
	char	*pt;

	len_s1 = 0;
	len_s2 = 0;
	if (s1)
		len_s1 = ft_strlen(s1);
	if (s2)
		len_s2 = ft_strlen(s2);
	pt = malloc(len_s1 + len_s2 + 1);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		pt[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len_s2)
	{
		pt[i + len_s1] = s2[i];
		i++;
	}
	pt[len_s1 + len_s2] = '\0';
	return (pt);
}

// #include <string.h>
// #include <stdio.h>
// int main(void) {
// 	// char *s = ft_strjoin("berlin", "42");
// 	// int test = strcmp(s, "berlin42");
// 	char *s = ft_strjoin("", "42");
// 	int test = strcmp(s, "42");
// 	printf("%s \n", s);
// 	printf("%d \n", test);
// 	return 0;
// }