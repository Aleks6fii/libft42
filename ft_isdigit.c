/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilippo <afilippo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:23:33 by afilippo          #+#    #+#             */
/*   Updated: 2024/05/08 20:57:53 by afilippo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c != '\0' && c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int main(void) {
// 	// char test[] = "98";
// 	char test = '9';
// 	int res = ft_isdigit(&test);
// 	printf("%d", res);

// 	return(0);
// }
