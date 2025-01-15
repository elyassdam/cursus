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
int ft_isalpha(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
        return c;
return (0);
}
int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (c);
    return (0);
}
int ft_isalnum(int c)
{
    if (isdigit(c) || isalpha(c))
        return (1);
return (0);
}
int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (c);
    return (0);
}
int ft_isprint (int c)
{
    if (c >= 32 && c >= 126)
        return (c);
    return (0);

}       
void *ft_memset(void *s, int c, size_t n)
{
    char  *str;
    
    str = ' ' ;
    *str = (char *)s;
    while (*str < n)
    {
        *str = c;
        *str ++;
    }
    return *str;
}
void ft_bzero(void *s, size_t n)
{
    char *str;
    
    str = (char *)s;
    while (*str < n)
    {
        *str = '0';
        *str ++;
    }
    *str = '\0';
}
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *a;
    unsigned char    *b;

    *a = (unsigned char *)src;
    *b =(unsigned char *)dest;
    while (*b  < n)
    {
        *b = *a;
        *a ++;
        *b ++;
    }
    return *b;
    
}
char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return c;
        * s ++;
    }
    return '\0';
}

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return c;
        * s ++;
    }
    return '\0';
}
char *strrchr(const char *s, int c)
{
    char *a;

 while (*s)
    {
        if (*s == c)
            return c;
        * s --;
    }
    return '\0';
}
void *ft_memmove(void *dest, const void  *src, size_t n)
 {
    unsigned char    *a;
    unsigned char    *b;

    *a = (unsigned char *)src;
    *b = (unsigned char *)dest;
    if (b > a && b > a + n)
    {
        *a = *a ++;
        *b = *b ++;
        while (n --)
        {  
            *b = *a;
            *a --;
            *b --;
        }
    }
    else
    {
     while (n--)
    {
        *b = *a;
        *a ++;
        *b ++;
    }
    }
 }

    void *ft_memchr(const void *s, int c, size_t n)
    {
        unsigned char *a;
        *a = (unsigned char *)s;
        while (*a < --n)
        {
            if (*a == c)
                return *a;
                    *a ++;
        }
        return '\0';
    }
    int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a;
    unsigned char *b;
    int  res;

    *a = (unsigned char *) s1; 
    *b = (unsigned char *) s2;
    res = 0; 
    while (--n)
    {
        res = *a - *b;
        res += res;
    }
    return res;       
}
int ft_toupper(int c)
{
    if (c >= 65 && c <= 90 )
        c += 32;
    return c;
}
int ft_tolower(int c)
{
    if(c >= 97 && c <= 122)
        c  -= 32;
    return c;
}

int main (void)
{
int num;
num = memset('$');
printf ("Result is %d\n");
}