/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:41:54 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:41:55 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output(int n, int fd)
{
	if (n > 9)
		output(n / 10, fd);
	n = n % 10 + '0';
	write(fd, &n, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	output(n, fd);
}
/* 
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
} 
*/