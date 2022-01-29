/*
** EPITECH PROJECT, 2018
** Day07
** File description:
** task05
*/

int main(int argc, char **argv)
{
    int counter = 0;

    counter = argc - 1;
    while (counter >= 0) {
        my_putstr(argv[counter]);
        my_putchar('\n');
        counter--;
    }
    return (0);
}
