/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:59:52 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 21:01:30 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uch;

	i = 0;
	str = (unsigned char *) s;
	uch = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == uch) 
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

// int main(void) {
//     char test[] = "khkgjekrdrg";
//     char c = 'g';
//     void *p = ft_memchr(test, c, 6);
//     return 0;
// }
