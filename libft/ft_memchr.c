/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh@student.42singapore.sg <jsoh@stude    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:51:23 by jsoh@studen       #+#    #+#             */
/*   Updated: 2025/05/09 20:51:23 by jsoh@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr_s;
	unsigned char uc_c;
	size_t	i;

	i = 0;
	ptr_s = (unsigned char*)s;
	uc_c = (unsigned char) c;
	while(i < n)
	{
		if (ptr_s[i] == uc_c)
			return ((void *)&ptr_s[i]);
		i++;
	}
	return (NULL);
}
