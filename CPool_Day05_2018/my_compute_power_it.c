/*
** EPITECH PROJECT, 2018
** Day05
** File description:
** task03
*/
int my_compute_power_it(int nb, int p)
{
    int result = 1;
    long beug = 1;

    if (p == 0) {
   	return (1);
    }
    if (p < 0) {
   	return (0);
    }
    while (p > 0) {
        result = result *  nb;
        beug = beug * nb;
        p = p - 1;
    }
    if (beug > 2147483647 || beug < -2147483647) {
        return (0);
    }
    return (result);
}
