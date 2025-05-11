/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:39:54 by jsoh@studen       #+#    #+#             */
/*   Updated: 2025/05/11 14:22:05 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;

	i = 0;
	ptr_dst = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if ((ptr_src + n) > ptr_dst)
	{
		while (n > 0)
		{
			ptr_dst[n - 1] = ptr_src[n - 1];
			n--;
		}
	}
	else if (ptr_dst != ptr_src)
	{
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
