/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** print the string
*/

#include <unistd.h>
#include "../../include/my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
