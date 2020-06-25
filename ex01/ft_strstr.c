/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:23:46 by sallow            #+#    #+#             */
/*   Updated: 2020/06/25 11:26:41 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


{
	int i;
    i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++	;
	}
	dest[i] = '\0';

	return dest;
}

int main(void)
{
	char ch1[] = "Ruddik Mulaudzi";
	char ch2[] = {};

	ft_strncpy(ch2, ch1, 6);

	printf("copied string is %s", ch2);

	return (0);}
