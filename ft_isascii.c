/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:57:18 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 20:57:27 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else 
		return (0);
}

// int main(void) {
//     char ch[] = "jhd";
//     int res = ft_isascii(ch);
//     printf("%d", res);
//     return (0);
// }
