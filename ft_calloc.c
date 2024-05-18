/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:54:43 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/13 15:49:45 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*pt;
	int		check;
	int		i;

	check = number * size;
	if (number == 0 || size == 0)
		check = 1;
	else if ((check / number != size) || check < 0)
		return (NULL);
	pt = malloc(check);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < check)
	{
		pt[i] = 0;
		i++;
	}
	return ((void *) pt);
}

// #include <stdio.h>
// #include <limits.h>
// #include <stdint.h> // this includes size_max 
// #include <stdlib.h>

// int main(void)
// {
// 	// int res = (ft_calloc(SIZE_MAX, SIZE_MAX) == NULL);
// 	// printf("%d ", res);

// 	printf("sizemax is %zu ", SIZE_MAX);

// 	return 0;
// }