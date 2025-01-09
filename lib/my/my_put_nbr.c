/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** Print nb
*/

#include "../../include/my.h"

static void too_neg(void)
{
    my_putstr("-2147483648");
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648){
        too_neg();
        return 0;
    }
    if (nb < 0){
        nb *= -1;
        my_putchar('-');
    }
    if (nb < 10) {
        my_putchar(nb % 10 + 48);
        return 0;
    }
    my_put_nbr(nb / 10);
    my_putchar(nb % 10 + 48);
    return 0;
}
