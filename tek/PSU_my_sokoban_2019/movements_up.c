/*
** EPITECH PROJECT, 2019
** movements_up.c
** File description:
** move up
*/

int lenght_line(char *buffer);

void movements_to_up (char *buffer)
{
    int a = 0;
    int lenght;
    char keep_position;

    lenght = lenght_line(buffer);

    while (buffer[a] != 'P')
        a = a + 1;
    if (buffer[a - lenght - 1] == '#') {

    }
    else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - lenght - 2] == '#') {

    }
    else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - 2] == '#') {
        buffer[a] = ' ';
        buffer[a - lenght - 1] = 'P';
        buffer[a - lenght - lenght - 2] = 'X';
    }
    else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - lenght - 2] == '#') {

    }
     else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - 2] == 'X') {
        buffer[a - lenght - lenght - 2] = 'X';
        buffer[a - lenght - 1] = 'P';
        buffer[a] = ' ';
    }

    else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - 2] == 'O') {
        buffer[a] = ' ';
        buffer[a - lenght - 1] = 'P';
        buffer[a - lenght - lenght - 2] = 'X';
    }
    else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - lenght - 2] == 'X') {

    }

    else if (buffer[a - lenght - 1] == 'O') {
        buffer[a - lenght - 1] = 'P';
        buffer[a] = ' ';
    }
    else if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - 2] == ' ') {
        buffer[a - lenght - lenght - 2] = 'X';
        buffer[a - lenght - 1] = 'P';
        buffer[a] = ' ';
    }
    else if (buffer[a - lenght - 1] != 'X' || buffer[a - lenght - 2] != 'O') {
        if (buffer[a - lenght - 1] == 'X' && buffer[a - lenght - lenght- 2] == '#') {

        }
        else {
            keep_position = buffer[a];
            buffer[a] = buffer[a - lenght - 1];
            buffer[a - lenght - 1] = keep_position;
        }
    }
}
