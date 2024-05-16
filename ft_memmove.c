/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:03:56 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/12 19:14:51 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	unsigned int	i;

	temp_dst = (unsigned char *)str1;
	temp_src = (unsigned char *)str2;
	i = 0;
	if (temp_dst > temp_src)
	{
		while (n != 0)
		{
			temp_dst[n] = temp_src[n];
			n--;
		}
	}
	else
	{
		while (i <= n)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return(str1);
}

// int main(void) {
//     char test[] = "khkgjekr";
//     char c[] = "hello";
//     ft_memmove(test, c, 6);
//     printf("", test);
//     return 0;
// }
