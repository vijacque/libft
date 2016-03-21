/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:21:14 by vijacque          #+#    #+#             */
/*   Updated: 2015/12/01 17:23:27 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2 && n)
	{
		while (n-- > 0)
		{
			if (*s1 != *s2)
			{
				if (*(unsigned char *)s1 > *(unsigned char *)s2)
					return (1);
				else
					return (-1);
			}
			if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
		}
	}
	return (0);
}
