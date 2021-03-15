/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** function that check if the track is cleared or not and function which stop car correctly
*/

#include "n4s.h"

int check_end(char *str)
{
    int i = (my_strlen(str) - 1);
    int j = 0;
    char *tmp = malloc(sizeof(char *) * (i + 1));

    if (tmp == NULL)
        return (-1);
    while (str[i] != ':' && str[i])
        i--;
    while (str[--i] != ':' && str[i]);
    i++;
    while (str[i] != ':' && str[i])
        tmp[j++] = str[i++];
    tmp[j] = '\0';
    if (!my_str_compare("Track Cleared", tmp)) {
        free(tmp);
        stop_car();
        return (1);
    }
    free(tmp);
    return (0);
}
