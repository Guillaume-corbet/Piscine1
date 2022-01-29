/*
** EPITECH PROJECT, 2018
** task05
** File description:
** my print comb
*/

int    my_print_comb(void)
{
    int    counter = 0;
    int    number1 = 48;
    int    number2 = 48;
    int    number3 = 48;

    while (counter <= 999) {
	if (number1 == number2 || number2 == number3 || number1 == number3) {
        } else {
	    my_putchar(number3);
	    my_putchar(number2);
	    my_putchar(number1);
	    if (number3 == 55 && number2 == 56 && number1 == 57) {
		return 0;
            }
	    my_putchar(44);
	    my_putchar(32);
        }
	counter = counter + 1;
	number1 = number1 + 1;
	if (number1 > 57) {
	    number2 = number2 + 1;
	    number1 = number2;
	}
        if (number2 > 57) {
	    number3 = number3 + 1;
	    number2 = number3;
	}
    }
    return 0;
}
