/*
** EPITECH PROJECT, 2018
** task03
** File description:
** my print digits
*/

int    my_print_digits(void)
{
    int    counter;
    char    letter;

    counter = 0;
    letter = 48;
    while (counter < 10) {
       	my_putchar(letter);
	counter = counter + 1;
	letter = letter + 1;
    }
    return 0;
}
