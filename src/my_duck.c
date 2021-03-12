/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** my_duck
*/

#include "../include/my.h"

void my_duck_animation(t_graph *prm)
{
    sfIntRect rectangle;

    if (prm->duck_number < 2)
        (prm->duck_number)++;
    else
        prm->duck_number = 0;
    rectangle.top = 0;
    rectangle.left = prm->duck_number * 110;
    rectangle.height = 110;
    rectangle.width = 110;
    sfSprite_setTextureRect(prm->spritesheet, rectangle);
}

void my_manage_duck(t_graph *prm)
{
    prm->duck_coord.x += prm->speed;
    if (prm->duck_coord.x > 1024){
        prm->speed *= -1;
        prm->direction = -1;
        prm->duck_coord.y = my_randomizer(0, 600);
    }
    if (prm->duck_coord.x < -110){
        prm->speed *= -1;
        prm->direction = 1;
        prm->duck_coord.y = my_randomizer(0, 600);
    }
    sfSprite_setPosition(prm->spritesheet, prm->duck_coord);
}

void my_reset_position(t_graph *prm)
{
    if (prm->direction == 1) {
        prm->duck_coord.x = 1024;
        return;
    }
    if (prm->direction == -1) {
        prm->duck_coord.y = -120;
        return;
    }
}