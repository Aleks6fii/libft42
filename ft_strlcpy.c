/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 17:39:08 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/10 17:39:29 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, const char *str2, size_t n)
{
	unsigned int	src_len;

	src_len = ft_strlen(str2);
	if (src_len + 1 < n)
		ft_memcpy(str1, str2, src_len + 1);
	else if (n != 0)
	{
		ft_memcpy(str1, str2, n - 1);
		str1[n - 1] = 0;
	}
	return (src_len);
}

// int main(void) {
//     char test[] = "khkgjekrdrg";
//     char c[] = "hello";
//     ft_strlcpy(test, c, 6);
//     printf("", test);
//     return 0;
// }
