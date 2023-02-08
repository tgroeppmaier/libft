/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:40:35 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:40:36 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n-- > 0)
	{
		*str = '\0';
		str++;
	}
}
/* 
int	main(void)
{
	void *ptr[3];
	printf("%c\n", *str);

	ft_bzero(ptr, 3);
	return (0);
} */