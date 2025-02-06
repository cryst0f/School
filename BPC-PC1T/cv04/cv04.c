#include <stdio.h>
#include <math.h>

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