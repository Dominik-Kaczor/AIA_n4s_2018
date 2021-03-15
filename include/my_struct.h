/*
** EPITECH PROJECT, 2019
** navy.h
** File description:
** structur
*/

#ifndef STRU_H_
#define STRU_H_

typedef struct str_need_s {
    int size;
    char **array;
    int pos;
    int i;
    int j;
}str_need;

typedef struct params_s {
    float front;
    float right;
    float left;
    float ford;
    float dir;
    char *infos;
}params_t;

typedef struct ray_s {
    char **tab;
    char *str;
    float mid;
}ray_t;

#endif // STRU_H_ //
