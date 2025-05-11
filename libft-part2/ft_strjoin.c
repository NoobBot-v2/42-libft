/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:01:12 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/11 18:14:32 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*joined_s;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_s = (char *)malloc(total_len);
	if (!joined_s)
		return (NULL);
	ft_strlcpy(joined_s, s1, total_len);
	ft_strlcat(joined_s, s2, total_len);
	return (joined_s);
}
