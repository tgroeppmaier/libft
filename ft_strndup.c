/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 08:11:41 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 08:53:25 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;

	str = malloc(n + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, n + 1);
	return (str);
}
