/*
** EPITECH PROJECT, 2018
** Day08
** File description:
** task03
*/

#include <stdlib.h>

int my_show_word_array(char * const tab)
{
    int size = 0;

    while (tab[size] != '\0')
        size = size + 1;
    my_putstr(concat_params(size, tab));
    return (0);
}
