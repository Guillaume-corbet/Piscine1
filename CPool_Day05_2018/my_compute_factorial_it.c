/*
** EPITECH PROJECT, 2018
** Day05
** File description:
** task01
*/
int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0) {
        return (0);
    }
    if (nb > 12) {
        return (0);
    }
    while (nb > 1) {
        result = result * nb;
        nb = nb - 1;
    }
    return (result);
}
