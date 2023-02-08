/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:23:37 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:38:05 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count(int nb)
{
	int	len;

	len = 1;
	if (nb < 0)
		nb = nb * -1;
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

void	ft_convert(int nb, char *str)
{
	if (nb >= 1)
	{
		*str = nb % 10 + '0';
		str--;
		ft_convert(nb / 10, str);
	}
}

char	*ft_makestr(int len, int nb, char *str)
{
	if (nb < 0)
	{
		str = (char *)malloc(len + 2);
		if (!str)
			return (NULL);
		nb = nb * -1;
		str[0] = '-';
		str++;
	}
	else
	{
		str = (char *)malloc(len + 1);
		if (!str)
			return (NULL);
	}
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	return (str);
}

char	*min_int(char *str)
{
	str = malloc(12);
	if (!str)
		return (NULL);
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}

char	*ft_itoa(int nb)
{
	int		len;
	char	*str;
	int		sign;

	str = NULL;
	sign = 0;
	if (nb == -2147483648)
		return (min_int(str));
	len = ft_count(nb);
	str = ft_makestr(len, nb, str);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		sign = 1;
		nb = nb * -1;
	}
	ft_convert(nb, str + len - 1);
	if (sign)
		return (str - 1);
	return (str);
}
/*
int	main(void)
{
	int i;

	i = 2147483647;
	printf("%s\n", ft_itoa(i));
	return (0);
}
*/