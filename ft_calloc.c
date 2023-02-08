/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:07:01 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:52 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	test;

	if (count == 0 || size == 0)
		return (ft_strdup(""));
	test = count * size;
	if (test / count != size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*
	int	main(void)
{
	ft_calloc(3, sizeof(int));
	return (0);
}
*/