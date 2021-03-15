/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** file that contain the main of the ai
*/

#include "n4s.h"

int main(void)
{
    ray_t *rays = malloc(sizeof(ray_t));

    if (rays == NULL)
        return (84);
    exec_cmd("START_SIMULATION\n");
    loop(rays);
    return (0);
}
