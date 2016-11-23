/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_and_open.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:07:05 by pbourdon          #+#    #+#             */
/*   Updated: 2016/11/23 16:32:33 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nmotool.h"

void	ft_parse_and_open(char *filename)
{
	int				fd;
	char			*ptr;
	struct stat		buf;

	if ((fd = open(filename, O_RDONLY)) < 0)
	{
		ft_putstr(filename);
		ft_putstr(": No such file or directory\n");
		return;
	}
	if (fstat(fd, &buf) < 0)
	{
		ft_putstr(filename);
		ft_putstr(": Error on fstat\n");
		return;
	}
	if ((ptr = mmap(0, buf.st_size, PROT_READ, MAP_PRIVATE, fd, 0)) == MAP_FAILED)
	{
		ft_putstr(filename);
		ft_putstr(": Error on mmap\n");
		return;
	}
	ft_get_header(ptr);
	ft_destroy_map(ptr, buf.st_size);
}
