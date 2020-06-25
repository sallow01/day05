/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:51:08 by sallow            #+#    #+#             */
/*   Updated: 2020/06/25 10:00:59 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
   	{
       dest[i] = src[i];
       i++;
    }
    dest[i]='\0';
    return dest;
}

int main()
{
	ft_strcpy(char *dest);
	return 0;
}
