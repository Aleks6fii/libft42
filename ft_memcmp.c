/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:01:43 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 21:03:09 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uch1;
	unsigned char	*uch2;
	size_t			i;

	uch1 = (unsigned char *) s1;
	uch2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (uch1[i] != uch2[i])
			return (uch1[i] - uch2[i]);
		i++;
	}
	return (0);
}

// int main(void) {
//     char test[] = "khkgjekrdrg"; // s1
//     char c[] = "khkgz";   // s2
//     int ans = ft_memcmp(test, c, 6);
//     return 0;
// }
