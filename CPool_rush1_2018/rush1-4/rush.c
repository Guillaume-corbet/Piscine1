/*
** EPITECH PROJECT, 2018
** rush
** File description:
** test begin rush without main
*/
void same_letter(int x, int y)
{
    int counter = 0;

    if (y == 1) {
        while (counter != x) {
            my_putchar('B');
            counter ++;
        }
    }
    if (x == 1) {
        while (counter != y) {
            my_putchar('B');
            my_putchar('\n');
            counter ++;
        }
    }
    return (0);
}

void line_top_low(int x, int y)
{
    int counter = 0;
    int counter2 = 0;

    counter2 = x - 2;
    my_putchar('A');
    while (counter != counter2) {
        my_putchar('B');
        counter ++;
    }
    my_putchar('C');
    my_putchar('\n');
    return (0);
}

void line_between(int x, int y)
{
    int counter = 0;
    int counter2 = 0;

    counter2 = x - 2;
    my_putchar('B');
    if (x >= 2) {
        while (counter != counter2) {
            my_putchar(32);
            counter ++;
        }
    }
    my_putchar('B');
    my_putchar('\n');
    return (0);
}

void rush(int x, int y)
{
    int counter = 0;
    int counter2 = 0;

    if (y <= 0 || x <= 0) {
        write(2, "invalid size\n", 13);
        return (0);
    }
    counter2 = y - 2;
    if (x == 1 || y == 1) {
        same_letter(x, y);
        return (0);
    }
    line_top_low(x, y);
    while (counter2 != counter && y > 2) {
        line_between(x, y);
        counter ++;
    }
    line_top_low(x, y);
    return (0);
}
