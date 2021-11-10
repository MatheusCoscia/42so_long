/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matrodri <matrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:52:14 by matrodri          #+#    #+#             */
/*   Updated: 2021/11/09 23:29:32 by matrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	first_check(char **map)
{
	int	x;
	int	y;

	x = 0;
	while (map[x] != NULL)
	{
		y = 0;
		while (map[x][y] != '\0')
		{
			if (x == 0 || y == 0 || x == size_map_x(map))
			{
				if (map[x][y] != '1')
					return(0);
			}
			y++;
		}
		printf("valor de x: %d\nvalor de y: %d", x, y);
		x++;
	}
	return (1);
}

static int	second_check(char **map)
{
	int	x;
	int	y;

	x = 0;
	y = size_map_y(map);
	while(map[x][y])
	{
		if (map[x][y] != '1')
			return (0);
		y++;
	}
	return (1);
}

int	check_wall(char **map)
{
	if (!first_check(map) || !second_check(map))
		return (0);
	return (1);
}
