/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:48:19 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/12 21:09:08 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pt;
	unsigned int	i;
	size_t			strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > strlen)
		len = strlen - start;
	pt = malloc(len + 1);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < len)
	{
		pt[i] = *(s + i + start);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}

// #include <string.h>
// #include <stdio.h>
// int main(void){
// 	char *s = ft_substr("tripouille", 1, 1);
// 	printf("%s \n", s);
//     int res = !(strcmp(s, "r"));
// 	printf("%d \n", res);
// 	return 0;
// }