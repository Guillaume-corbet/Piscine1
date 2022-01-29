/*
** EPITECH PROJECT, 2018
** Final stumper
** File description:
** rush1_4
*/

#include "./my_strlen_rush.h"
#include "./lib/my/my.h"

int rush1_4(char *str)
{
    int j = 0;
    int k = 0;
    int count = 0;

    j = my_strlen_j(str);
    k = my_strlen_k(str);
    count = (k - 1) * (j + 1);
    if (str[0] == 'B' || (str[count] == 'A' && str[count + j - 1] == 'C'
    && str[0] == 'A' && str[j - 1] == 'C')) {
        my_putstr("[rush1-4]");
        my_putchar(32);
        my_put_nbr(j);
        my_putchar(32);
        my_put_nbr(k);
        if (str[0] == 'B')
            my_putstr(" || ");
        return (0);
    } else
        return (84);
}