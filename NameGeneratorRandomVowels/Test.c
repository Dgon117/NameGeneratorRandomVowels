#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int
main(void)
{
    //randomly
    char Vowel[25][25] =
    { "da", "den", "ya", "her", "va", "sie", "lyn", "bell", "vid", "ley",
    "ver", "car", "tis", "we", "rto", "sie", "lyn", "bell", "van", "sla", "lu"
    };
    char Vowel2[25][25] =
    { "Nova", "Exotic", "Bacon", "Real", "Cake", "Pitt", "Bond", "Cosmo",
    "Spears", "Torn", "Poet", "Dizzy", "Love", "Blur", "Cage", "Liker",
    "Pixie", "Ness", "Doll",
    "Cage", "Diva"
    };
    //Showing Names to be combined 
    printf("Vowel combiner\n");
    for (int i = 0; i <= 19; i++)
        printf("%s\n", Vowel[i]);
    printf("\n");
    //Random Name Listed
    printf("Firstname\n");
    srand(time(0));
    //Combined 2.

    printf("%s", Vowel[rand() % 10]);
    printf("%s", Vowel[rand() % 10]);
    printf("%s", Vowel2[rand() % 10]);

    return 0;
}