/*
** EPITECH PROJECT, 2018
** task02
** File description:
** my_print_revalpha
*/

int    my_print_revalpha(void)
{
    int    counter;
    char    letter;

    counter = 0;
    letter = 122;
    while (counter < 26) {
        my_putchar(letter);
        counter = counter + 1;
        letter = letter - 1;
    }
    return 0;
}
