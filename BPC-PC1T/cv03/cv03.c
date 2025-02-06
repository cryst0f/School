#include <stdio.h>

/*Task - V hlavní funkci main napište kód, který vyžádá od uživatele čas, za který se ozve hrom po
blesku za bouřky. Program pak vypíše na konzoli vzdálenost místa, kam blesk uhodil. Rychlost
zvuku uvažujte 330 m/s. Zpoždění způsobené dobou šíření světla zanedbejte.*/

int main(){
    int time;
    const int v = 330;

    printf ("Enter the time after which thunder follows a lightning strike during a storm: \n");
    scanf ("%d", &time);
    int s = time * v;
    printf ("Lightning distance: %d m.", s);
}