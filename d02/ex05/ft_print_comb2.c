/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdarif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:44:45 by hdarif            #+#    #+#             */
/*   Updated: 2019/07/14 00:24:39 by hdarif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((char)(i / 10) + '0');
			ft_putchar((char)(i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + '0');
			ft_putchar((char)(j % 10) + '0');
			if ((i != 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
