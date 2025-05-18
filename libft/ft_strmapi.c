/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 22:36:56 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/16 23:14:04 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ptrstr;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	ptrstr = (char *)malloc(len + 1);
	if (!ptrstr)
		return (NULL);
	while (i < len)
	{
		ptrstr[i] = f(i, s[i]);
		i++;
	}
	ptrstr[i] = '\0';
	return (ptrstr);
}
