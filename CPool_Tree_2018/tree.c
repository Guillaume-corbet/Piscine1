/*
** EPITECH PROJECT, 2018
** tree
** File description:
** begin tree
*/
void my_putchar(char c)
{
    write(1, &c, 1);
}

int nb_max(int size)
{
    int stock = 2;
    int result_modulo = 0;
    int counter = 0;
    int number_max = 0;
    
    while (counter != size ) {
        result_modulo = size % 2;
        if (result_modulo != 0) {
            stock ++;
        }
        size --;
        number_max = number_max + stock;
    }
    return (number_max);
}

void stars(int star, int max)
{
    int counter = 0;
    int space = 0;
    int counter2 = 0;

    space = max - star;
    while (counter2 < space) {
        my_putchar(32);
        counter2++;
    }
    star = star * 2 + 1;
    while (counter < star) {
        my_putchar('*');
        counter ++;
    }
    my_putchar('\n');
    return (0);
}

void trunk(int size, int nb_max)
{
    int stock = 0;
    int counter = 0;
    int result_modulo = 0;

    while (counter != size) {
        result_modulo = size % 2;
        if (result_modulo == 0) {
            stock ++;
        }
        size --;
    }
    nb_max = nb_max + stock;
    while (stock != nb_max) {
        my_putchar(32);
        nb_max --;
    }
    stock = stock * 2 + 1;
    while (stock != 0) {
        my_putchar('|');
        stock --;
    }
    my_putchar('\n');
    return (0);
}

void sheet(int nb_max, int nb)
{
    int star = 0;
    int counter = 0;
    int stock = 1;
    int line = 4;
    int begin = 0;
    int result_modulo = 0;

    nb = nb - 1;
    while (nb >= begin) {
        while (line > counter) {
            stars(star, nb_max);
            counter ++;
            star ++;
        }
        begin ++;
        result_modulo = begin % 2;
        if (0 != result_modulo) {
            stock ++;
        }
        star = star - stock;
        line = begin + 3 + line;
    }
    return (0);
}

void tree(int x)
{
    int counter_trunk = 0;
    int max = 0;
    
    if (x <= 0) {
        return (0);
    }
    max = nb_max(x);
    sheet(max, x);
    while (counter_trunk != x) {
        trunk(x, max);
        counter_trunk ++;
    }
    return (0);
}

int main(void)
{
    tree(3);
    return (0);
}
