/*
** EPITECH PROJECT, 2018
** task01
** File description:
** my_print_alpha
*/
int    my_print_alpha(void)
{
    int    counter;
    char    letter;

    counter = 0;
    letter = 97;
    while (counter < 26) {
       	my_putchar(letter);
        counter = counter + 1;
        letter = letter + 1;
    }
    return 0;
}
