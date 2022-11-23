/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <seungjki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:39:04 by seungjki          #+#    #+#             */
/*   Updated: 2022/11/17 10:27:19 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	error_message(int flag)
{
	if (flag == 0)
		write(2, "Error\nNeed only two argv", 25);
	else if (flag == 1)
		write(2, "Error\nInitialize fail", 22);
	else if (flag == 2)
		write(2, "Error\nFailed making double array", 33);
	else if (flag == 3)
		write(2, "Error\nNot a valid map", 22);
	else if (flag == 4)
		write(2, "Error\nFail to build map", 24);
	else if (flag == 5)
		write(2, "Error\nextension not valid\n", 27);
	else if (flag == 6)
		write(2, "Error\nmlx_init fail", 20);
	else if (flag == 7)
		write(2, "Error\nimage initialize fail", 28);
	else if (flag == 8)
		write(2, "Error\nmlx_new_window fail", 26);
	else if (flag == 9)
		write(2, "Error\nmlx_new_image fail", 25);
	exit(0);
}
