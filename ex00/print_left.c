/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:45:04 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/16 16:50:03 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	print_four_left(int i, int **final)
{
	if ((final[i][0] == 0 || final[i][0] == 1)
		&& (final[i][1] == 0 || final[i][1] == 2)
		&& (final[i][2] == 0 || final[i][2] == 3)
		&& (final[i][3] == 0 || final[i][3] == 4))
	{
		final[i][0] = 1;
		final[i][1] = 2;
		final[i][2] = 3;
		final[i][3] = 4;
	}
	else
		return (1);
	return (0);
}

int	print_one_left(int i, int **final)
{
	if ((final[i][4] == 0 || final[i][4] == 4))
	{
		final[i][4] = 4;
	}
	else
		return (1);
	return (0);
}

int	print_three_left(int i, int **final)
{
	if ((final[i][2] == 0 || final[i][2] == 4))
	{
		final[i][2] = 4;
	}
	else
		return (1);
	return (0);
}
