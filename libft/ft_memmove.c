/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:39:54 by jsoh@studen       #+#    #+#             */
/*   Updated: 2025/05/19 15:10:36 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	if (dest == src || n == 0)
		return (dest);
	ptr_dst = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dst < ptr_src)
	{
		i = 0;
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		ptr_dst[n - 1] = ptr_src[n - 1];
		n--;
	}
	return (dest);
}
