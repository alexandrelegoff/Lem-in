/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:00:30 by anjansse          #+#    #+#             */
/*   Updated: 2019/05/17 14:20:49 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void				check_error(char *str)
{
	if (str[0] == 'L')
	{
		ft_printf("ERROR\n");
	}
}
