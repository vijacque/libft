/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vijacque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 14:56:04 by vijacque          #+#    #+#             */
/*   Updated: 2016/03/07 14:56:05 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		issigned(t_opts *opts)
{
	if (opts->type == 'd' || opts->type == 'i' || opts->type == 'D')
		return (1);
	return (0);
}

int		isunsigned(t_opts *opts)
{
	if (opts->type == 'o' || opts->type == 'O' ||
		opts->type == 'x' || opts->type == 'X' ||
		opts->type == 'u' || opts->type == 'U' ||
		opts->type == 'b')
		return (1);
	return (0);
}

int		iswchar(t_opts *opts)
{
	if (opts->type == 'C' ||
		opts->type == 'S' ||
		((!ft_strcmp(opts->modify, "l")) &&
		(opts->type == 'c' || opts->type == 's')))
		return (1);
	return (0);
}

int		ischar(t_opts *opts)
{
	if (opts->type == '%' || opts->type == 'c' || opts->type == 's')
		return (1);
	return (0);
}

int		isptr(t_opts *opts)
{
	if (opts->type == 'p')
		return (1);
	return (0);
}
