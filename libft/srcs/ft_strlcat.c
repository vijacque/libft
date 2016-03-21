/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:13:08 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:20:51 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_max;
	size_t	i;
	size_t	size_dst;
	size_t	j;

	size_dst = ft_strlen(dst);
	j = size_dst + ft_strlen(src);
	i = 0;
	size_max = size - size_dst - 1;
	while (size > size_dst + 1 && src[i])
	{
		dst[size_dst++] = src[i++];
		size_max--;
	}
	dst[size_dst] = '\0';
	if (size < j - ft_strlen(src))
		return (size + ft_strlen(src));
	else
		return (j);
}
