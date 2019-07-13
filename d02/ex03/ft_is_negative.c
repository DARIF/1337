/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdarif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 19:30:55 by hdarif            #+#    #+#             */
/*   Updated: 2019/07/13 12:32:17 by hdarif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}
void ft_is_negative (int n) 
{
	if ( n>=0 )
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
int main(void)
{
	ft_is_negative (1337);
	return(0);
}
