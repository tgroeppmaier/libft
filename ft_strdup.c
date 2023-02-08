/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:23:15 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:29:00 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	len;
	char			*str;

	len = ft_strlen(s1);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}

/* int	main(void)
{
	const char	src[] = "2111";
	char *dest;
	dest = ft_strdup(src);
	
	while(*dest)
		{
			printf("%c", *dest);
			dest++;
		}
    return(0);
} */