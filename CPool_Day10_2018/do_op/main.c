/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

int do_op(int number, int number2, char **argv)
{
    if (argv[2] == '+') {
        my_put_nbr(number + number2);
    } else if (argv[2] == '-') {
        my_put_nbr(number - number2);
    } else if (argv[2] == '/') {
        if (number2 == 0) {
            my_putstr("Stop: division by zero");
            return (84);
        }
        my_put_nbr(number / number2);
    } else if (argv[2] == '%') {
        if (number2 == 0) {
            my_putstr("Stop: division by zero");
            return (84);
        }
        my_put_nbr(number % number2);
    } else if (argv[2] == '*') {
        my_put_nbr(number * number2);
    } else {
        my_putchar('0');
        return (84);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int number = 0;
    int number2 = 0;
    int fonction = 0;
    
    if (argc != 4) {
        my_putchar('0');
        return (84);
    } else {
        number = my_getnbr(argv[1]);
        number2 = my_getnbr(argv[3]);
        my_put_nbr(number);
        my_putchar('\n');
        my_put_nbr(number2);
        fonction = do_op(number, number2, argv);
        if (fonction == 84) {
            return  (84);
        }
    }
    return (0);
}
