/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh <jsoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:00:18 by jsoh              #+#    #+#             */
/*   Updated: 2025/05/08 20:10:49 by jsoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(const char *s);

int	strlcpy(char *dst, char *src, int dst_size)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < dst_size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}
