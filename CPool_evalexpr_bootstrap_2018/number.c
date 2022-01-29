/*
** EPITECH PROJECT, 2018
** Bootstrap evalexpr
** File description:
** number
*/

#include "./lib/my/my.h"

int number(char **str)
{
    int counter = -1;
    int result = 0;
    int nb = 0;

    while ((*str)[++counter] != '\0')
        if ((*str)[counter] >= 48 && (*str)[counter] <= 57 && nb++);
    if (nb < 1) {
        *str = *str + counter;
        return (0);
    }
    counter = -1;
    while ((*str)[++counter] < 48 || (*str)[counter] > 57);
    while ((*str)[counter] >= 48 && (*str)[counter] <= 57) {
        result = result * 10;
        result = result + (*str)[counter] - 48;
        counter = counter + 1;
    }
    *str = *str + counter;
    return (result);
}