/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdarif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:22:59 by hdarif            #+#    #+#             */
/*   Updated: 2019/07/13 16:30:23 by hdarif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char z;
	z = 'z';
	while (z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
}
