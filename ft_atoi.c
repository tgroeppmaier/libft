/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:40:22 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:40:25 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	sign;

	c = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		c = c * 10 + (*str - '0');
		str++;
	}
	return (c * sign);
}
/* 
int	main(void)
{
	char str[] = "-+48";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
} */