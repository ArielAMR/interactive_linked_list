/*
** EPITECH PROJECT, 2024
** B-CPE-110-PAR-1-1-organized-ariel.amriou
** File description:
** list_len.c
*/

#include <stdlib.h>

int list_len(char **list)
{
    int i = 0;

    while (list[i] != NULL)
        i++;
    return i;
}
