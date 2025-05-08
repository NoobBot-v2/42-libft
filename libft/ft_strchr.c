/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:02:37 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/08 20:49:11 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	strlen(const char *s);

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i < (strlen(s) + 1))
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
