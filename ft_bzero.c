/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:34:37 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 20:45:50 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)dst;
	while (n != 0)
	{
		*temp++ = 0;
		n--;
	}
}

// #include <stdio.h>
// int main(void) {
//     char test[] = "khkgjekr";
//     ft_bzero(test, 1);
//     printf(test);
//     return 0;
// }
