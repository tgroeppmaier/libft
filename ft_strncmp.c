/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:07:05 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/03/04 13:35:23 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main(void)
{
	// char str1[15] = "abcdef";
	// char str2[15] = "ABCDEF";
	// int ret;
	// ret = ft_strncmp(str1, str2, 4);
	// if(ret < 0) {
	//    printf("str1 is less than str2");
	// } else if(ret > 0) {
	//    printf("str2 is less than str1");
	// } else {
	//    printf("str1 is equal to str2");
	// }
	printf("%d", ft_strncmp("test\200", "test\0", 6));
	return (0);
}
 */