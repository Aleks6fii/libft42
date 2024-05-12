/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:42:46 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 17:43:27 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i + little_len < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
			j++;
		if (little[j] == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
