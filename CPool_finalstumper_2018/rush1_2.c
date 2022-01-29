/*
** EPITECH PROJECT, 2018
** Final stumper
** File description:
** rush1_2
*/

#include "./my_strlen_rush.h"
#include "./lib/my/my.h"

int rush1_2(char *str)
{
    int j = 0;
    int k = 0;
    int count = 0;

    j = my_strlen_j(str);
    k = my_strlen_k(str);
    count = (k - 1) * (j + 1);
    if (str[0] == '*' || (str[count] == '\\' && str[count + j - 1] == '/'
    && str[0] == '/' && str[j - 1] == '\\')) {
        my_putstr("[rush1-2]");
        my_putchar(32);
        my_put_nbr(j);
        my_putchar(32);
        my_put_nbr(k);
        return (0);
    } else
        return (84);
}