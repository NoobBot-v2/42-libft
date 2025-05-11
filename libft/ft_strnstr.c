/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 14:26:31 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/11 16:50:43 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	char	*ptr_big;

	ptr_big = (char *) big;
	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return (ptr_big);
	while (i <= (len - little_len))
	{
		if (ft_strncmp(ptr_big + i, little, little_len) == 0)
			return (ptr_big + i);
		i++;
	}
	return (NULL);
}
