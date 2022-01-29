/*
** EPITECH PROJECT, 2018
** Day07
** File description:
** task04
*/

int main(int argc, char **argv)
{
    int counter = 0;

    while (argc > counter) {
        my_putstr(argv[counter]);
        my_putchar('\n');
        counter++;
    }
    return (0);
}
