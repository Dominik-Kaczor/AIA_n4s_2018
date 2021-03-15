/*
** EPITECH PROJECT, 2019
** n4s
** File description:
** bonus for n4s
*/

#include "n4s.h"
#include <SFML/System.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

void key_events(sfRenderWindow *window, sfEvent event, sfMusic *music)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue
        || event.type == sfEvtClosed) {
        sfMusic_destroy(music);
        sfRenderWindow_close(window);
    } else if (event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue) {
            my_printf("WHEELS_DIR:0\n");
            my_printf("CAR_FORWARD:0.5\n");
        } else if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue) {
            my_printf("WHEELS_DIR:0\n");
            my_printf("CAR_BACKWARDS:0.5\n");
        }
        if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue)
            my_printf("WHEELS_DIR:0.2\n");
        if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue)
            my_printf("WHEELS_DIR:-0.2\n");
    }
    return;
}

void main_loop(sfRenderWindow *window, sfSprite *sprite, sfVector2f vector)
{
    sfEvent event;
    sfMusic *music = sfMusic_createFromFile("bonus/race.ogg");
    
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfSprite_setPosition(sprite, vector);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        while (sfRenderWindow_pollEvent(window, &event))
            key_events(window, event, music);
        sfRenderWindow_display(window);
    }
    return;
}

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {300, 300, 32};
    sfTexture *texture = sfTexture_createFromFile("bonus/race.jpg", NULL);
    sfSprite *sprite = sfSprite_create();
    sfVector2f vector;
    
    window = sfRenderWindow_create(video_mode, "My Window", sfResize |
                                   sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    sfSprite_setTexture(sprite, texture, sfTrue);
    my_printf("START_SIMULATION\n");
    main_loop(window, sprite, vector);
    my_printf("STOP_SIMULATION\n");
    return (0);
}
