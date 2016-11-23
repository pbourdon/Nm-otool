/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_header.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:16:54 by pbourdon          #+#    #+#             */
/*   Updated: 2016/11/23 16:33:59 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nmotool.h"

void	ft_get_header(void *ptr)
{
	unsigned int magic_number;

	magic_number = *(int *) ptr;
	if (magic_number == MH_MAGIC_64)
	{
		ft_handle_64(ptr);
	}
}
