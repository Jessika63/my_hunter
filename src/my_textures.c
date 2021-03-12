/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-jessica.ebely
** File description:
** my_textures
*/

#include "../include/my.h"

void my_load_texture(t_graph *prm)
{
    sfTexture *forest = sfTexture_createFromFile("./pics/forest_pokemon2.png",
    NULL);
    sfTexture *duck = sfTexture_createFromFile("./pics/spritesheet.png", NULL);
    sfTexture *visor = sfTexture_createFromFile("./pics/visor.png", NULL);
    sfTexture *play = sfTexture_createFromFile("./pics/Play_Game.png", NULL);
    sfTexture *game_over = sfTexture_createFromFile("./pics/game_over.png",
    NULL);
    sfTexture *exit = sfTexture_createFromFile("./pics/exit.png", NULL);

    prm->background = sfSprite_create();
    sfSprite_setTexture(prm->background, forest, sfTrue);
    prm->spritesheet = sfSprite_create();
    sfSprite_setTexture(prm->spritesheet, duck, sfTrue);
    prm->aim = sfSprite_create();
    sfSprite_setTexture(prm->aim, visor, sfTrue);
    prm->play_button = sfSprite_create();
    sfSprite_setTexture(prm->play_button, play, sfTrue);
    prm->loser = sfSprite_create();
    sfSprite_setTexture(prm->loser, game_over, sfTrue);
    prm->exit_button = sfSprite_create();
    sfSprite_setTexture(prm->exit_button, exit, sfTrue);
}
