/*
** EPITECH PROJECT, 2019
** Strlen_n
** File description:
** lll
*/

int xmax(char *buffer)
{
    int x = 0;

    for (int d = 0; buffer[d] != '\n'; d++) {
        x++;
    }
    return (x + 1);
}

int ymax(char *buffer)
{
    int y  = 0;

    for (int d = 0; buffer[d] != '\0'; d++) {
        if (buffer[d] == '\n')
            y++;
    }
    return y + 2;
}

int mal_n(char *buffer, int choice)
{
    int x = 0;

    if (choice == 0) {
        x = xmax(buffer);
    } else {
        x = ymax(buffer);
    }
    return x;
}