#include <stdio.h>
#include <ctype.h>
main ( )
{
    int lower, upper;

    printf("\t\t\t----------------- WELCOME  LOWAERCASE TO UPARCASE PROGRAMME ----------------------");
    printf("\n\n\nEnter your character : ");
    lower = getchar();
    upper = toupper(lower);
    printf("\n\nOutput :")  ;
    putchar(upper);
    printf("\t\t\t\t----------------- THANK YOU ------------------");
}
