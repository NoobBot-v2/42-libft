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

	i = 0;
	if (!little || !big)
		return (NULL);
	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return ((char *) big);
	if (len < little_len || !big || !little || len == 0)
		return (NULL);
	while (i <= len - little_len && i + little_len <= ft_strlen(big))
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *) (big + i));
		i++;
	}
	return (NULL);
}

