/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:36:51 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 17:38:04 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		i;
	char	*pt;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	pt = (char *) malloc(len_s1 + len_s1 + 1);
	if (!pt)
		return (NULL);
	while (i <= len_s1)
	{
		pt[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len_s2)
	{
		pt[i + len_s1] = s2[i];
		i++;
	}
	pt[i + len_s1] = '\0';
	return (pt);
}
