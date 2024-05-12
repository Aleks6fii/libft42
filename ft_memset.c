/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:06:09 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 21:06:36 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_memset(void *str, int c, size_t l)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (l != 0)
	{
		*(temp++) = (unsigned char) c;
		l--;
	}
}

// #include <stdio.h>
// int main(void) {
//     char str[] = "helloworld";
//     size_t len = 5;
//     char c = 'h';
//     ft_memset(str, c, len);
//     printf(str);
//     return 0;
// }
