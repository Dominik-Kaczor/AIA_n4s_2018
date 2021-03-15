/*
** EPITECH PROJECT, 2019
** my_proto.h
** File description:
** contain all prototypes for navy
*/

#ifndef MY_PROTO_H_
#define MY_PROTO_H_

int exec_cmd(char *str);
int check_end(char *str);
int stop_car(void);
char **my_show_wordtab2(char *str, char);
int get_dir(char **, float);
int get_speed(float mid);
int loop(ray_t *rays);

#endif // MY_PROTO_H_ //
