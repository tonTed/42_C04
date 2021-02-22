/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:10:17 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/22 10:13:28 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../ex03/ft_atoi.c"

int	main()
{
	printf("%d\n",ft_atoi(" ---+--+1234ab567"));
	printf("%d\n",ft_atoi(" \n\t\f\v\r---+--+1234ab567"));
	printf("%d\n",ft_atoi(" -- -+--+1234ab567"));
	printf("%d\n",ft_atoi(" ---+--+ 1234ab567"));
	printf("%d\n",ft_atoi(" ---+--+9234ab567"));
	printf("%d\n",ft_atoi(" ---+--+0234ab567"));
	printf("%d\n",ft_atoi(" ---+--+1239ab567"));
	printf("%d\n",ft_atoi(" ---+--+1230ab567"));
	printf("%d\n",ft_atoi(" ---+--+0000001230ab567"));
	printf("%d\n",ft_atoi(" ---+--+123000000ab567"));
	printf("%d\n",ft_atoi(" ---D+--+1234ab567"));
	return 0;
}