/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 09:40:23 by sbenning          #+#    #+#             */
/*   Updated: 2015/12/16 10:16:16 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

int		ft_err(char *av, char *id, char *msg, int ret)
{
	ft_fprintf(2, "{green|gr}%s{eoc}: {red}%s{eoc}: %s\n", av, id, msg);
	return (ret);
}
