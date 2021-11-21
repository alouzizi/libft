/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:25:21 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/19 13:00:33 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	st;
	size_t	i;
	size_t	rc;

	i = 0;
	rc = ft_strlen(src);
	st = ft_strlen(dst);
	if (dstsize <= st)
		return (rc + dstsize);
	else
		rc += st;
	while (src[i] && st + 1 < dstsize)
	{
		dst[st] = src[i];
		i++;
		st++;
	}
	dst[st] = '\0';
	return (rc);
}
