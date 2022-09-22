/*
** EPITECH PROJECT, 2020
** help.c
** File description:
** help tetris
*/

#include <stdio.h>

void help()
{
    printf("Usage: ./tetris [options]\n");
    printf("Options:\n --help\t\t\tDisplay this help\n -L \
--level={num}\tStart Tetris at level num (def: 1)\n\
 -l --key-left={K}\tMove the tetrimino LEFT using\
 the K key (def: left arrow)\n -r --key-right={K}\t\
Move the tetrimino RIGHT using the K key (def: right arrow)\n\
 -t --key-turn={K}\tTURN the tetrimino clockwise 90d using the K key\
(def: top arrow)\n -d --key-drop={K}\tDROP the tetrimino using the\
 K key (def: down arrow)\n -q --key-quit={K}\tQUIT the game using the\
 K key (def: 'q' key)\n -p --key-pause={K}\tPAUSE/RESTART the game\
 using the K key (def: space bar)\n --map-size={row,col}\t\
Set the numbers of rows and columns of the map (def: 20,10)\n\
 -w --whithout-next\tHide next tetrimino (def: false)\n\
 -D --debug\t\tDebug mode (def: false)\n");
}
