/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcpy
*/

#include <unistd.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
