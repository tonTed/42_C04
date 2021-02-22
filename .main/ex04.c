/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:15:10 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 12:52:19 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int		main()
{
	int nb = -5;
	
	while(++nb < 5)
	{
		ft_putnbr_base(nb, "0123456789");
		ft_putchar('\n');
		ft_putnbr_base(nb, "01");
		ft_putchar('\n');
		ft_putnbr_base(nb, "0123456789ABCDEF");
		ft_putchar('\n');
		ft_putnbr_base(nb, "poneyvif");
		ft_putchar('\n');
		ft_putnbr_base(nb, "teddy");
		ft_putchar('\n');
		ft_putnbr_base(nb, " +0123456789ABCDEF");
		ft_putchar('\n');
	}

	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "01");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "teddy");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, " +0123456789ABCDEF");
	ft_putchar('\n');

	ft_putnbr_base(INT_MAX, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "01");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "teddy");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, " +0123456789ABCDEF");
	ft_putchar('\n');
	
	return 0;
}
