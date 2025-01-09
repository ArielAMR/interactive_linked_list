/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** print_linked_list.c
*/

#include <unistd.h>
#include "my.h"
#include "src.h"

void print_linked_list(linked_list_t *head, char *end)
{
    my_putstr(head->type);
    my_putstr(" n°");
    my_put_nbr(head->id);
    write(1, " - \"", 4);
    my_putstr(head->name);
    my_putstr(end);
}
