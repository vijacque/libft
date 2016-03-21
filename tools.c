/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 14:57:19 by vijacque          #+#    #+#             */
/*   Updated: 2016/03/07 15:04:25 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	freestr(char *str)
{
	if (*str)
		free(str);
	str = NULL;
}

void	freewstr(wchar_t *wstr)
{
	if (*wstr && ft_wstrlen(wstr) > 0)
		free(wstr);
	wstr = NULL;
}
