/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:15:00 by pbourdon          #+#    #+#             */
/*   Updated: 2016/11/23 15:16:22 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nmotool.h"

void	ft_destroy_map(void *ptr, size_t size)
{
	if (munmap(ptr, size) < 0)
	{
		ft_putstr("Error while munmaping\n");
		return;
	}
}
