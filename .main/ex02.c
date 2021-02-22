/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:08:32 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:13:11 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Écrire une fonction qui affiche un nombre passé en paramètre. La fonction
** devra être capable d’afficher la totalité des valeurs possibles dans une
** variable de type int.
**
** Par exemple :
** 		ft_putnbr(42) affiche "42"
*/

#include <limits.h>

#include "../ex02/ft_putnbr.c"

int main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
}