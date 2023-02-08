/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:42:10 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:42:11 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpyx(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (size);
}

int	ft_wcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (s[0] != c)
		count = 1;
	else
		count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (count > 0)
		return (count);
	else
		return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		k;
	int		count;

	i = 0;
	k = 0;
	array = malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		count = 0;
		while (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		if (count > 0)
			array[k++] = ft_strndup(s + i - count, count);
		if (s[i])
			i++;
	}
	array[k] = NULL;
	return (array);
}
/* 
int	main(void)
{
	char		**dest;
	const char	*s;
	char		c;
	int			i;
	int			j;

	s = ".lolo.";
	c = '.';
	dest = ft_split(s, c);
	i = 0;
	while (dest[i])
	{
		j = 0;
		while (dest[i][j])
		{
			printf("%c", dest[i][j]);
			j++;
		}	
		printf("\n");
		i++;
	}
	return (0);
}
 */