/*
** EPITECH PROJECT, 2018
** Day08
** File description:
** task01
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    int size = my_strlen(src);

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (i < size) {
        str[i] = src[i];
        i = i + 1;
    }
    str[i] = '\0';
    return (str);
}
