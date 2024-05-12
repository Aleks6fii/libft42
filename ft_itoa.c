/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 19:35:02 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 20:17:45 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_length(long num)
{
	int	count;

	count = 0;
	if (num < 0)
		num = -num;
	if (num == 0)
		count += 1;
	while (num != 0)
	{
		num /= 10;
		count += 1;
	}
	return (count);
}

static void	*if_alloc_fail(char *smth)
{
	if (!smth)
		return (NULL);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*res;
	long	numbr;

	numbr = n;
	len = num_length(numbr);
	res = (char *) malloc(len + 1);
	if_alloc_fail(res);
	res[0] = '0';
	if (numbr < 0)
		numbr = -numbr;
	if (numbr == 0)
		return (res);
	i = len - 1;
	while (numbr != 0)
	{
		res[i] = ((numbr % 10) + 48);
		numbr /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
