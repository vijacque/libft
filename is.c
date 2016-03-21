/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 14:55:35 by vijacque          #+#    #+#             */
/*   Updated: 2016/03/07 14:55:59 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		istype(char c)
{
	const char	types[15] = {"diDuUcCsSoOxXpb"};

	if (ft_strchr(types, c))
		return (1);
	return (0);
}

int		isflag(char c)
{
	const char	*flags = "-+ #0";

	if (ft_strchr(flags, c))
		return (1);
	return (0);
}

int		ismod(char c)
{
	const char	*mod = "hljz";

	if (ft_strchr(mod, c))
		return (1);
	return (0);
}

int		isocta(t_opts *opts)
{
	if (opts->type == 'o' || opts->type == 'O')
		return (1);
	return (0);
}

int		ishexa(t_opts *opts)
{
	if (opts->type == 'x' || opts->type == 'X')
		return (1);
	return (0);
}
