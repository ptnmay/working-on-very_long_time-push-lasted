/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:12:39 by psaeyang          #+#    #+#             */
/*   Updated: 2023/01/16 03:02:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

# include "./get_next_line/get_next_line_bonus.h"
# include "./libft/libft.h"

typedef struct s_game
{
	char	**twoarray;
	char	**copy;
	int	hight;
	int	len;
	int	nabwalk;
	int	c;
	int	p;
	int	e;
	int	p_x;
	int	p_y;
	int	p_ate;
	int	kept_c;
}	t_gm;

void	ft_error(char *error);
void	open_check(char *av, t_gm *game);
void	srang_map(char *av, t_gm *game);
void	check_wall(t_gm *game);
void	ff_namtuam(t_gm *game,char **mapff, int x, int y);
void	p_u_nee(t_gm *game);
int	check_five(char *checkline, t_gm *game);
int	checkber(char *av);
int	ft_strlen_nonl(char *s);





#endif
