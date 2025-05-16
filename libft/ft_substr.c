/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 17:13:25 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/11 18:04:03 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	max_len;
	char	*substring;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s || len == 0 || len_s == 0)
		return (ft_strdup(""));
	max_len = len_s - start;
	if (len > max_len)
		len = max_len;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, (s + start), (len + 1));
	return (substring);
}
