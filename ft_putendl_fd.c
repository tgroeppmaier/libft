/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:41:47 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:41:48 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}
/* 
int	main(void)
{
	ft_putstr_fd("hello World", 1);
	return (0);
} */