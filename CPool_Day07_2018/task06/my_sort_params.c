/*
** EPITECH PROJECT, 2018
** Day07
** File description:
** task06
*/

int number(char *nb)
{
    int stock = 0;

    stock = nb[0];
    return (stock);
}

char *condition(int ascii, int nb, char *str)
{
    if (ascii == nb) {
        my_putstr(str);
        my_putchar('\n');
    }
    return (0);
}

int main(int argc, char **argv)
{
    int ascii = 0;
    int counter = 0;

    while (ascii < 128) {
        counter = 0;
        while (counter < argc) {
            condition(ascii, number(argv[counter]), argv[counter]);
            counter++;
        }
        ascii++;
    }
    return (0);
}
