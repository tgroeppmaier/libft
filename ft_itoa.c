/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:05:05 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/03/13 14:16:09 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_countdigit(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_convert(char *str, int n, int len)
{
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 1 && len > 0)
	{
		len--;
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (str[0] == '-')
		return (str);
	else
		return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
	{
		str = malloc(2);
		*str = '0';
		str++;
		*str = '\0';
		return (str - 1);
	}
	if (n == -2147483648)
	{
		str = malloc(12);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	len = ft_countdigit(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str = ft_convert(str, n, len);
	return (str);
}
/* 
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
} */