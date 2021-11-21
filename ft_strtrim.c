/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alouzizi <alouzizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:03:33 by alouzizi          #+#    #+#             */
/*   Updated: 2021/11/13 05:24:21 by alouzizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lowl;
	size_t	la5ar;
	char	*s;

	s = 0;
	if (s1 != 0 && set != 0)
	{
		lowl = 0;
		la5ar = ft_strlen(s1);
		while (s1[lowl] && ft_strchr(set, s1[lowl]))
			lowl++;
		while (s1[la5ar - 1] && ft_strchr(set, s1[la5ar - 1]) && la5ar > lowl)
			la5ar--;
		s = (char *)malloc(sizeof(char) * (la5ar - lowl + 1));
		if (s)
			ft_strlcpy(s, &s1[lowl], la5ar - lowl + 1);
	}
	return (s);
}
