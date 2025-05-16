/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:25:07 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/11 14:23:15 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;

	count = ft_strlen(s);
	while (count > 0)
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		if (count == 0)
			break ;
		count--;
	}
	if (s[count] == (char)c)
		return ((char *)&s[count]);
	return (NULL);
}
