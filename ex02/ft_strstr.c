/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 11:28:41 by sallow            #+#    #+#             */
/*   Updated: 2020/06/25 11:30:07 by sallow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    char *a;
    char *b;

    b = to_find;

    if (*b == 0)
   	{
        return (char *) str;
    }

    
    for ( ; *str != 0; str+=1)
   	{
        if (*str != *b)
	   	{
            continue;
        }

        a = str;
        while (1)
	   	{
            if (*b == 0)
		   	{
                return (char *) str;
            }
            if (*a++ != *b++)
		   	{
                break;
            }
        }
        b = to_find;
	//	str += 1;
    }

    return NULL;
}

int main (void)
{
  char string[64] ="This is a test string for testing strstr";
  char *p;

  p = ft_strstr(string,"test");

  if(p)
  {
    printf("String found:\n" );

    printf ("First occurrence of string \"test\" in \"%s\" is:\n%s", string, p);
  }
  else
  {
    printf("String not found!\n" );
  }

  return 0; 
}

