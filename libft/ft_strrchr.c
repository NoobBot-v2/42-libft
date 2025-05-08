/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:25:07 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/08 19:45:30 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	strlen(const char *s);

char	*strrchr(const char *s, int c)
{
	int	count;

	count = strlen(s) + 1;
	while (count >= 0)
	{
		if (s[count] == c)
			return (&s[count]);
		count--;
	}
	return (NULL);
}
