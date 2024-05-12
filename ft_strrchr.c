/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:43:52 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 17:45:18 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ch = (char) c;
	while (s[i] != '\0') 
	{
		if (s[i] == ch)
			j = i;
		i++;
	}
	if (s[i] == ch)
		j = i;
	return ((char *) &s[j]);
}
