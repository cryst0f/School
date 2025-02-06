#include <stdio.h>
#include <math.h>

/*2. Vytvořte funkce soucet a rozdil.
Parametry funkcí budou následovné:
void soucet( double a[2], double b[2], double c[2] )
3. Implementujte funkce tak aby vracely v parametru c odpovídající hodnotu výsledku příslušné
operace s komplexními čísly a a b. V dvourozměrném poli a, b a c bude vždy reálná složka na
pozici indexu 0 a imaginární na pozicí indexu 1.
4. Vytvořte funkci tisk.
Hlavička funkce bude::
void tisk( double c[2] )
5. Implementujte funkci tak aby tiskla hodnotu čísla zadanou v parametru c ve formátu jako
tato ukázka: 1.5 + 4.5 j.
6. Napište kód do funkce main, který vyzve uživatele k zadání reálné a imaginární složky dvou
komplexních čísel, pak se zeptá na požadovanou operaci (+ nebo -), zavolá příslušnou funkci a
zobrazí výsledek pomocí funkce tisk*/

void sum (double a[2], double b[2], double c[2]){

    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];

}


void sub (double a[2], double b[2], double c[2]){

    c[0] = a[0] - b[0];
    c[1] = a[1] - b[1];

}

void print (double c[2]){
    printf ("%.1lf %c %.1lfj", c[0], (c[1] < 0) ? '-' : '+', (c[1] < 0) ? -c[1] : c[1]);
}

int main(){
    double a[2], b[2], c[2];
    char o;

    printf ("Enter real part of first number: \n");
    scanf("%lf", &a[0]);

    printf ("Enter imaginary part of first number: \n");
    scanf("%lf", &a[1]);
    
    printf ("Enter real part of second number: \n");
    scanf("%lf", &b[0]);

    printf ("Enter imaginary part of second number: \n");
    scanf("%lf", &b[1]);

    printf ("Chose operation using + or -: \n");
    scanf (" %c", &o);

    if (o == '+'){
        sum(a,b,c);
    }else if(o == '-'){
        sub (a,b,c);
    }else{
        return 1;
    }
    print(c);
    return 0;
    
}