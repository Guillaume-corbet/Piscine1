/*
** EPITECH PROJECT, 2018
** Day05
** File description:
** task02
*/
int my_compute_factorial_rec(int nb)
{
    int result;

    if (nb == 0) {
      	return (1);
    }
    if (nb == 1) {
       	return (1);
    }
    if (nb < 0) {
   	    return (0);
    }
    if (nb > 12) {
       	return (0);
    }
    result = nb * my_compute_factorial_rec(nb - 1);
    return (result);
}
