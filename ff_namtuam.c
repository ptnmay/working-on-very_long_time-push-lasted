/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff_namtuam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:16:40 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/16 03:28:03 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"so_long.h"

void	ff_namtuam(t_gm *game, char **mapff, int x, int y)
{
	if (x < 0 || y < 0 || x > game->len - 1 || y > game->hight - 1)
	{
		return ;

	}
	if (mapff[y][x] && mapff[y][x] == '1')
		return ;
	if (mapff[y][x] == 'C')
		game->kept_c++;
	game->copy[y][x] = '1';
	ff_namtuam(game, mapff, x, y - 1); //up
	ff_namtuam(game, mapff, x, y + 1); //down
	ff_namtuam(game, mapff, x - 1, y); //left
	ff_namtuam(game, mapff, x + 1, y); //right
}
