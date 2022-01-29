/*
** EPITECH PROJECT, 2018
** Final stumper
** File description:
** rush1_5
*/

#include "./my_strlen_rush.h"
#include "./lib/my/my.h"

int rush1_5(char *str)
{
    int j = 0;
    int k = 0;
    int count = 0;

    j = my_strlen_j(str);
    k = my_strlen_k(str);
    count = (k - 1) * (j + 1);
    if (str[0] == 'B' || (str[count] == 'C' && str[count + j - 1] == 'A'
    && str[0] == 'A' && str[j - 1] == 'C')) {
        my_putstr("[rush1-5]");
        my_putchar(32);
        my_put_nbr(j);
        my_putchar(32);
        my_put_nbr(k);
        return (0);
    } else
        return (84);
}