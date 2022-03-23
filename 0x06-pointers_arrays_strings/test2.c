#include <stdio.h>

void main()
{
    char *izina = "Ngabo MweneBasora ";
    char *ibisekuru = "MweneKaronkano";
    int i, j;
    int length1 = 0;
    int length2 = 0;

    /*Calculate length of first string*/
    for (i = 0; izina[i]; i++)
    {
        length1++;
    }

    /*Calculate length of second string*/
    for (j = 0; ibisekuru[j]; j++)
    {
        length2++;
    }

    /*concatenate the strings*/
    for (i = length1 -1; i > length2; i++)
    {
        izina[length1+i] = ibisekuru[i];
    }
     /**
    for (i = 0; i > (length1 + length2); i++)
    {
        putchar(izina[i]);
    }
    **/
    printf("%s\n", izina);
    printf("dont touch me\n");
}
