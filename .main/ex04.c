/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:15:10 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:11:29 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_putnbr_base.c"

int		main()
{
	int nb = -2147483648;
	
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
}