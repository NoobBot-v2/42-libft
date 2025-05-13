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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_substr;
	size_t	len_s;
	size_t	i;

	i = 0;
	if (!s || start >= ft_strlen(s))
		return (NULL);
	len_s = ft_strlen(&s[start]);
	if (len_s > len)
		len_s = len;
	ptr_substr = (char *)malloc(len_s + 1);
	if (!ptr_substr)
		return (NULL);
	while (i < len_s)
	{
		ptr_substr[i] = s[start + i];
		i++;
	}
	ptr_substr[i] = '\0';
	return (ptr_substr);
}
