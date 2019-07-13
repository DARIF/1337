/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdarif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 22:16:10 by hdarif            #+#    #+#             */
/*   Updated: 2019/07/12 11:38:18 by hdarif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
				while (c <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(',');
					c++;
			}
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb();
	return (0);
}
