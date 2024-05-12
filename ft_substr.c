/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:48:19 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 17:49:04 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pt;
	unsigned int	i;

	if (!s)
		return (NULL);
	pt = (char *)malloc(len + 1);
	i = start;
	while (i <= len || s[i])
	{
		pt[i] = s[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
