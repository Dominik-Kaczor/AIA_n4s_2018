/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** main for the n4s project
*/

#include "n4s.h"

int main_test(void)
{
    ray_t *rays = malloc(sizeof(ray_t));

    if (rays == NULL)
        return (84);
    exec_cmd("START_SIMULATION\n");
    loop(rays);
    return (0);
}
