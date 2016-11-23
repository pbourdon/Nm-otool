/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_sym.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:40:55 by pbourdon          #+#    #+#             */
/*   Updated: 2016/11/23 17:23:01 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nmotool.h"

void	ft_display_sym(int nsyms, int symoff, int stroff, void *ptr)
{
	int					i;
	char				*stringtable;
	struct nlist_64		*array;

	array = ptr + symoff;
	stringtable = ptr + stroff;

	i = 0;
	while (i < nsyms)
	{
		ft_putstr(stringtable);
		ft_putchar(' ');
		ft_putstr(stringtable + array[i].n_un.n_strx);
		ft_putchar('\n');
		i++;
	}
}
