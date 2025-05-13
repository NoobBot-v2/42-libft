/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:14:50 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/11 20:40:49 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);

int	ft_not_in_set(char c, char const *set)
{
	return (ft_strchr(set, c) == NULL);
}

size_t	ft_start_idx(char const *s1, char const *set)
{
	size_t	start_idx;

	start_idx = 0;
	while (start_idx < ft_strlen(s1))
	{
		if (ft_not_in_set(s1[start_idx], set))
			break ;
		start_idx++;
	}
	return (start_idx);
}

size_t	ft_end_idx(char const *s1, char const *set, size_t start_idx)
{
	size_t	end_idx;

	end_idx = ft_strlen(s1);
	while (end_idx > start_idx)
	{
		if (ft_not_in_set(s1[end_idx - 1], set))
			break ;
		end_idx--;
	}
	return (end_idx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_idx;
	size_t	end_idx;
	size_t	i;
	char	*ptr_trimmed;

	i = 0;
	start_idx = ft_start_idx(s1, set);
	end_idx = ft_end_idx(s1, set, start_idx);
	if (start_idx >= end_idx)
		return (ft_strdup(""));
	ptr_trimmed = (char *)malloc(end_idx - start_idx + 1);
	if (!ptr_trimmed)
		return (NULL);
	while ((start_idx + i) < end_idx)
	{
		ptr_trimmed[i] = s1[start_idx + i];
		i++;
	}
	ptr_trimmed[i] = '\0';
	return (ptr_trimmed);
}

// Check if first char is in set, iterate for all other char in set
// If match found, move the start by 1
// Repeat until no match is found at the start