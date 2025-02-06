#include <stdio.h>
#include <ctype.h>
/*1. Vytvořte konzolovou aplikaci dle šablony „CMake Project“, která v níže definovaném textu
vyhodnotí statistické údaje:
char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi
funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
2. Vytvořte funkci, která spočítá počet písmen v textu (můžete použít funkci isalpha z knihovny
ctype.h).
3. Vytvořte funkci, která spočítá počet číslic v textu (můžete použít funkci isdigit z knihovny
ctype.h).
4. Všechny funkce zavolejte v hlavní funkci main a výsledky zobrazte na obrazovce. Všem
funkcím předávejte parametr s ukazatelem na výše uvedený text*/


int charCount(char* ptr){
    
    int i = 0;
    int count = 0;
    
    while (ptr[i] != 0){
        if (isalpha(ptr[i])){
            count++;
        }
        i++;
    }
    return count;
}

int numCount(char* ptr){
    int i = 0;
    int count = 0;
    while (ptr[i] != 0){
        if (isdigit(ptr[i])){
            count++;
        }
        i++;
    }
    return count;
}


int main(){
    char text[] = ("Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.");
    char* ptr = text;

    printf ("\nThere are %d letters in text.", charCount(text));
    printf ("\nThere are %d numbers in text.", numCount(text));
    
}