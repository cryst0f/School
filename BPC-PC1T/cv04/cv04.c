#include <stdio.h>
#include <math.h>

/*1. Vytvořte nový projekt dle šablony „CMake Project“ (filtr C++/All platforms/Console).
2. Vytvořte funkci jePrestupny s rozhraním:
int jePrestupny( int rok );
3. Implementujte funkci tak aby vracela hodnotu 1, je-li rok v parametru přestupný, v opačném
případě vracejte hodnotu 0.
4. Rok je přestupný, je-li dělitelný 4 a zároveň není dělitelný 100. Je tu však výjimka: Přestupné
jsou i roky dělitelné 400!
5. V hlavní funkci main zavolejte funkci jePrestupny postupně s hodnotami 1000, 2000, 2002,
2004 a 2014 výsledky vypište na konzolu.*/

int isLeap(int year){

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf ("%d 1\n", year);
        return year;
    }else{
        printf ("%d 0\n", year);
        return year;
    }
    return 0;
}

int main(){

    isLeap(1000);
    isLeap(2000);
    isLeap(2002);
    isLeap(2004);
    isLeap(2014);
    return 0;
}