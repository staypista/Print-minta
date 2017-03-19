#include <stdio.h>
#include <stdlib.h>
/** Példa program a Printf beépített függvény használatához.
 *  Syntaxis : int printf(const char *format, ...)
 */
int main()
{
    /** Konstans szöveg kiírása.*/
    printf("Konstans szoveg");


    printf("\n\n");
    /**Decimális változó kiírása*/
    int decimal=1995;
    printf("%d", decimal);


    printf("\n\n");
    /**Lebegőpontos szám kiiratása hossz méretezzéssel
     * %<hossz><kiiratás tipusa>
     * Lebegőpontos esetén a hossz két részre osztható <egéssz.lebegőpontos>
     */
    double pi=3.141592653589793238462643383279502884197169399375105820974944592307816406286;
    printf("Rovid:%3.2f \t Normal:%f \t Hosszu:%3.22f", pi, pi, pi);


    printf("\n\n");
    /**String kiiratása karakterenként*/
    int i;
    char array[] = "String eggyesevel kiiratva";    //Tömb feltöltése tetszőleges hosszúságú stringel.
    for(i=0;array[i];i++) printf("%c", array[i]);   //Tömb elemeinek kiírása a tömb indexein való végig lépkedéssel.


    printf("\n\n");
    /**String kiiratása egyben
     * A változóhelyen egy memória címet vár! De mivel a tömb index nélkül a tömb címe
     * ezért az alábbi módon kényelmesen használható.
     * Fontos hogy csak olyan stringet adj be neki aminek a végén biztos hogy ottvan a
     * tömblezáró nulla.
     */
    char string[]= "String egyben";
    printf("%s", string);


    printf("\n\n");
    /**Kiegészítő: Tömbformázó beépített függvény
     * Syntaxis: int sprintf(char *str, const char *format, ...)
     * Tetszöleges méretű megformázott striget másol be egy általunk megadott tömbe.
     * Működése a printf-el megegyező
     */
     char stringarray[100];
     sprintf(stringarray, "%s a %3.2f-el nagyon meno volt %d-ben.", string , pi, decimal);
     printf("%s", stringarray);

    printf("\n\n");

    return 0;
}
