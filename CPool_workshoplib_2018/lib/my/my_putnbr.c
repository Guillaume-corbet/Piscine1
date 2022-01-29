/*
** EPITECH PROJECT, 2018
** Day03
** File description:
** task07
*/

int my_putnbr(int nb)
{
    int result;

    if (nb < 0) {
        nb = nb - nb - nb;
        my_putchar(45);
    }
    result = nb % 10;
    nb = nb / 10;
    if (nb == 0) {
        my_putchar(result + 48);
        return (0);
    }
    my_putnbr(nb);
    my_putchar(result + 48);
    return (0);
}
