/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 04:01:37 by sbenning          #+#    #+#             */
/*   Updated: 2014/11/12 05:27:24 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}
