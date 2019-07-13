/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdarif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:51:21 by hdarif            #+#    #+#             */
/*   Updated: 2019/07/11 18:39:33 by hdarif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb2(void)
{
	char i;
	char j;
	i = 0;
	while (i <= 98)
	{
		j = i;
		while (j <= 99)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft-putchar('');
			ft-putchar(j / 10 + '0');
			ft_putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++
	}
}

int main ()
{
	ft_putchar();
	return (0);
}
