/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 22:27:12 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/16 23:12:56 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_check_n(int n)
{
	unsigned int	temp_n;

	if (n == INT_MIN)
		temp_n = 2147483648U;
	else if (n < 0)
		temp_n = (unsigned int)-n;
	else
		temp_n = (unsigned)n;
	return (temp_n);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	temp_n;
	char			temp_str[12];
	size_t			i;

	i = 0;
	temp_n = ft_check_n(n);
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (temp_n >= 10)
	{
		temp_str[i] = (temp_n % 10) + '0';
		temp_n /= 10;
		i++;
	}
	temp_str[i] = temp_n + '0';
	while (i > 0)
	{
		ft_putchar_fd(temp_str[i], fd);
		i--;
	}
	ft_putchar_fd(temp_str[i], fd);
}
