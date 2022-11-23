/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:06:27 by seungjki          #+#    #+#             */
/*   Updated: 2022/11/17 01:19:39 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	ber_check(char *name_of_ber)
{
	int	check;
	int	check1;
	int	idx;

	idx = -1;
	check = 1;
	check1 = 0;
	while (name_of_ber[++idx])
	{
		if (name_of_ber[idx] == '.')
		{
			check = ft_strcmp("ber", name_of_ber + idx + 1);
			check1 ++;
		}
	}
	if (check != 0)
		return (0);
	if (check1 != 1)
		return (0);
	return (1);
}

void	*initialize_image(void **mlx, t_img *img)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	img->wall = mlx_xpm_file_to_image(mlx, "./images/Idle-copy.xpm", &w, &h);
	if (img->wall == 0)
		return (0);
	img->exit = mlx_xpm_file_to_image(mlx, "./images/End-_Idle_.xpm", &w, &h);
	if (img->exit == 0)
		return (0);
	img->floor = mlx_xpm_file_to_image(mlx, "./images/Gray.xpm", &w, &h);
	if (img->floor == 0)
		return (0);
	img->character = mlx_xpm_file_to_image(mlx,
			"./images/Fall-_32x32_.xpm", &w, &h);
	if (img->character == 0)
		return (0);
	img->edible = mlx_xpm_file_to_image(mlx, "./images/Idle.xpm", &w, &h);
	if (img->edible == 0)
		return (0);
	return (mlx);
}

int	initialize_everything(void **mlx, t_img *img, char *name_of_ber)
{
	*mlx = mlx_init();
	if (*mlx == 0)
		error_message(6);
	if (ber_check(name_of_ber) == 0)
		error_message(5);
	if (initialize_image(mlx, img) == 0)
		error_message(7);
	return (0);
}
