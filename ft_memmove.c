/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:41:15 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:41:17 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if ((dest == NULL && src == NULL) && n != 0)
		return (NULL);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (n--)
		d[n] = s[n];
	return (dest);
}
/*
int	main(void)
{
	char	dest[];
	char	src[];

	dest[] = "wonderfulllllllll";
	src[] = "111111111111111111";
	ft_memcpy(dest, src, 10);
	return (0);
}
*/