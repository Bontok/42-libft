/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: FedericoOrlando <FedericoOrlando@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 05:58:34 by FedericoOrl       #+#    #+#             */
/*   Updated: 2022/10/15 05:59:02 by FedericoOrl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    return (1);
    return (0);
}
#include <stdio.h>
#include <ctype.h>

int main()
{
