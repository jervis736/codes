/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strcat
*/

#include <string.h>

int my_strlen(char const *src);

char *my_strncat(char *dest, char const *src, int nb)
{
    unsigned int dest_lenght = my_strlen(dest);
    unsigned int i = 0;

    for (i = 0; i < nb && src[i]; i++)
        dest[dest_lenght + i] = src[i];
    dest[dest_lenght + i] = 0;
    return dest;
}
