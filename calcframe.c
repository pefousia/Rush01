/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaaouam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:51:36 by alaaouam          #+#    #+#             */
/*   Updated: 2022/11/13 17:37:41 by alaaouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_calc_linelr(int *v, char **m, int n)
{

	
}

void	ft_calc_frame(char **m, int n)
{
		int	f;
		int	c;
		int	v;

		v = 1;
		f = 2;
		c = 2;
	while (f < (n - 1))
	{
		while (c < (n -  1))
		{
			ft_calc_linelr(&v, m, n);
		}
	}
}

int	ft_chk_frame(char **m, char **m42, int n)
{
}
