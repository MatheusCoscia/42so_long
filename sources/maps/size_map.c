/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:21:11 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/08 19:23:37 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	size_map_x(char **map)
{
	return ((int)ft_strlen(map[0]));
}

int	size_map_y(char **map)
{
	int	y;

	y = 0;
	while (map[y])
		y++;
	return (y);
}
