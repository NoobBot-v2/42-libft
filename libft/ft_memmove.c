/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoh@student.42singapore.sg <jsoh@stude    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:39:54 by jsoh@studen       #+#    #+#             */
/*   Updated: 2025/05/09 13:39:54 by jsoh@studen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{

}

/*
1) No overlap
2) Src starts before Dest and ends within Dest
3) Src starts within Dest and ends after Dest
*/