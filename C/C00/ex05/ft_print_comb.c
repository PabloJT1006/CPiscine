/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:06:59 by pjimenez          #+#    #+#             */
/*   Updated: 2023/03/12 19:46:59 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c, int d, int u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7')
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comc(void)
{
	int	u;
	int	d;
	int	c;

	c = '0';
	while (c <= '7' )
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u ++;
			}
		d++;
		}
	c++;
	}
}	
