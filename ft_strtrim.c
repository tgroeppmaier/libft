/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:07:32 by timo              #+#    #+#             */
/*   Updated: 2023/02/03 09:00:40 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nstr;
	int		s1len;
	int		f;
	int		r;

	s1len = ft_strlen(s1);
	f = 0;
	r = s1len;
	while (ft_strchr(set, s1[f]) != NULL && s1[f])
		f++;
	if (f == s1len)
	{
		nstr = malloc(1);
		if (!nstr)
			return (NULL);
		*nstr = '\0';
		return (nstr);
	}
	while (ft_strchr(set, s1[r - 1]) != NULL && r > f)
		r--;
	nstr = malloc(r - f + 1);
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, s1 + f, r - f + 1);
	return (nstr);
}
/* 
int	main(void)
{
	const char *s1 = "         ";
	const char *set = " ";
	char *dst;
		
	dst = ft_strtrim(s1, set);
	while(*dst)
		{
			printf("%c", *dst);
			dst++;
		}
	return (0);
} */