/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** function that execute commands to vrep
*/

#include "n4s.h"

int exec_cmd(char *str)
{
    my_put_str(str);
    str = get_next_line(0);
    if (check_end(str) == 1)
        return (1);
    return (0);
}

int stop_car(void)
{
    exec_cmd("CAR_FORWARD:0\n");
    exec_cmd("CYCLE_WAIT:5\n");
    exec_cmd("STOP_SIMULATION\n");
    return (0);
}
