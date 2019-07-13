/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdarif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 00:27:41 by hdarif            #+#    #+#             */
/*   Updated: 2019/07/13 16:50:14 by hdarif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)

{
	char i;
	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
