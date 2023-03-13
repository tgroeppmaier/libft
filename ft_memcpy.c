	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:40:59 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:41:00 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if ((dest == 0 && src == 0) && n != 0)
		return (NULL);
	while (n--)
		*dest2++ = *src2++;
	return (dest);
}
/* 
int	main(void)
{
	char dest[] = "aaaaaa";
	char src[] = "111111";
	ft_memcpy(dest, src, 3);
	return(0);
}
 */