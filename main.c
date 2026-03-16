#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "blindtest.h"

int main()
{
    srand(time(NULL));

    Song list[100];
    int nb = load_songs("songs.txt", list);
    if (nb > 0)
    {
        shuffleSong(list, nb);
        printf("Le blind test est prêt et les morceaux sont mélangés !\n");
    }

    return 0;
}