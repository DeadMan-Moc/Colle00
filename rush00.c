/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttshabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 07:56:40 by ttshabal          #+#    #+#             */
/*   Updated: 2018/02/18 09:37:17 by ttshabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	width(int x)
{
	int i;

	i = 1;
	if (x == 1)
		ft_putchar('o');
	if (x > 1)
	{
		ft_putchar('o');
		while (i <= x)
		{
			if (i < (x - 1))
				ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	bottom_half(int x, int y)
{
	int i;

	i = 1;
	if (y > 1)
	{
		if (x != 1)
			ft_putchar('|');
		while (i <= x)
		{
			if (i < (x - 1))
				ft_putchar(' ');
			if (i == x)
				ft_putchar('|');
			i++;
		}
	}
	ft_putchar('\n');
}

void	vertical(int x, int y)
{
	int i;

	i = 1;
	while (i < y - 1)
	{
		bottom_half(x, y);
		i++;
	}
}

void	rush(int a, int b)
{
	if (a > 0 && b > 0)
	{
		width(a);
		vertical(a, b);
		if (b > 1)
			width(a);
	}
}
