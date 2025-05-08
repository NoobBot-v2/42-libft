/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:11:01 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/08 20:57:35 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(const char *s);

int	strlcat(char *dst, char *src, int size)
{
	int	i;
	int	dst_len;
	int	src_len;

	dst_len = strlen(dst);
	src_len = strlen(src);
	i = 0;
	while (i < (size - 1) && dst[i] != '\0')
		i++;
	if (i == (size - 1) || dst[i] != '\0')
		return (dst_len + src_len);
	while (i < (size - 1) && *src != '\0')
	{
		dst[i] = *src;
		src++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*
Check: strlcat() traverses size characters without finding a NUL,
the length of the string is considered to be size and the 
destination string will not be NUL-terminated

Success: strlcat() that means the initial length of dst plus the length of src.
*/