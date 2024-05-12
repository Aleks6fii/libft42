/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:35:52 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 17:36:35 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pt;
	int		i;

	i = 0;
	pt = (char *) malloc(ft_strlen(s) + 1);
	if (!pt)
		return (NULL);
	while (s[i])
	{
		pt[i] = s[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
