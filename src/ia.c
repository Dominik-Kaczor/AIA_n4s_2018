/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** the ai function which is the artificial inteligence of the n4s
*/

#include "n4s.h"

char *pars_str(char *str)
{
    int i = 0;
    int j = 0;
    char *tmp = malloc(sizeof(char *) * 100);

    if (tmp == NULL)
        return (NULL);
    while (i != 3)
        if (str[j++] == ':')
            i++;
    i = 0;
    while (str[j]) {
        if ((str[j] >= '0' && str[j] <= '9') || str[j] == '.' ||
            str[j] == ':') {
            tmp[i] = str[j];
            i++;
	}
        j++;
    }
    tmp[i - 1] = '\0';
    return (tmp);
}

int get_speed(float mid)
{
    if (mid >= 2000)
        return (exec_cmd("CAR_FORWARD:1.0\n"));
    else if (mid >= 1500)
        return (exec_cmd("CAR_FORWARD:0.8\n"));
    else if (mid >= 1000)
        return (exec_cmd("CAR_FORWARD:0.5\n"));
    else if (mid >= 600)
        return (exec_cmd("CAR_FORWARD:0.4\n"));
    else if (mid >= 400)
        return (exec_cmd("CAR_FORWARD:0.2\n"));
    else
        return (exec_cmd("CAR_FORWARD:0.1\n"));
}

int get_it(ray_t *rays)
{
    int test = 0;

    rays->str = get_next_line(0);
    if ((test = check_end(rays->str)) == 1) {
        return (1);
    }
    rays->str = pars_str(rays->str);
    rays->tab = my_str_to_wordarray(rays->str, ':');
    rays->mid = atof(rays->tab[15]);
    return (0);
}

int loop(ray_t *rays)
{
    while (1) {
        my_put_str("GET_INFO_LIDAR\n");
        if (get_it(rays) == 1)
            return (1);
        if (get_speed(rays->mid) == 1)
            return(1);
        my_put_str("GET_INFO_LIDAR\n");
        if (get_it(rays) == 1)
            return (1);
        if (get_dir(rays->tab, rays->mid) == 1)
            return(1);
    }
    return (0);
}
