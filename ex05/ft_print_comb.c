/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:02:09 by pakucera          #+#    #+#             */
/*   Updated: 2021/09/08 20:26:47 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_comb(void)

{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine;
		while (dizaine++ < '8')
		{
			unite = dizaine;
			while (unite++ < '9')
			{
				ft_putchar(centaine);
				ft_putchar(dizaine);
				ft_putchar(unite);
				if (centaine != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		centaine++;
	}
}

/* int	main(void)
{
	ft_print_comb();
	return (0);
} */
