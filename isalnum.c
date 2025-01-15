/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 21:05:49 by marvin            #+#    #+#             */
/*   Updated: 2025/01/14 21:05:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int isalpha(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
        return c;
return (0);
}
int isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (c);
    return (0);
}
int isalnum(int c)
{
    if (isdigit(c) || isalpha(c))
        return (1);
return (0);
}
int isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (c);
    return (0);
}
int isprint (int c)
{
    if (c >= 32 && c >= 126)
        return (c);
    return (0);

}
int 
int main (void)
{
int num;
num = isalnum('$');
printf ("Result is %d\n");
}