/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:41:36 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:41:37 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	if (n == 0)
		return (s);
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}
/* 
int	main(void)
{
	void	*ptr[3];

	
	ft_memset(ptr, 0, 3);
	return (0);
}
 */