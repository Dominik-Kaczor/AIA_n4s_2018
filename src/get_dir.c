/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** management of the directory of the car
*/

#include "n4s.h"

int direction(float idx, char *val)
{
    my_put_str("WHELLS_DIR:");
    if (idx < 0.0)
        my_putchar('-');
    my_put_str(val);
    val = get_next_line(0);
    if (check_end(val) == 1)
        return (1);
    return (0);
}

int get_dir(char **tab, float mid)
{
    float right = atof(tab[31]);
    float left = atof(tab[1]);

    if (mid >= 1500)
        return (direction(left - right, "0.005\n"));
    else if (mid >= 1000)
        return (direction(left - right, "0.05\n"));
    else if (mid >= 600)
        return (direction(left - right, "0.1\n"));
    else if (mid >= 400)
        return (direction(left - right, "0.2\n"));
    else if (mid >= 200)
        return (direction(left - right, "0.3\n"));
    else
        return (direction(left - right, "0.5\n"));
}
