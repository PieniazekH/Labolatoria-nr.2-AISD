#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {5,4,10,0,4,1,7,5,3,9,3,11,255,7,150}; //wczytanie tablicy
    insertionSort(tablica);                                    // wywołanie funkcji
    for(int x=0; x<15; x++){
        printf("%d ", tablica[x]);      // wyswietlenie posortowanej tablicy
    }
    return 0;
}
void insertionSort(int tablica[]){
    for(int i=i; i<15 ; i++){       //petla przechodzaca po wszystkich elementach tablicy, co ważne zaczynajaca od elementu z indeksem 1(czyli 2 element tablicy)
        int temp = tablica[i];       // przypisanie elementu tablicy na i-tej pozycji do zmiennej tymczasowej
        int j=i-1;                  // utworzenie zmiennej j równej i-1
        while(j>=0 && tablica[j]>temp){      // petla while, która wykonuje swoje działanie tylko wtedy gdy zmienna j jest wieksza lub równa 0 i element talbicy na pozycji j-tej pozycji jest wiekszy niz zmienna tymczasowa
              tablica[j+1]=tablica[j];            // przypisanie kolejnemu elementowi wartość wcześniejszą(tą z lewej strony)
                j--;                            //zmniejszenie zmiennej j o jeden
                tablica[j+1]=temp;        // przypisanie kolejnemu elementowi(temu z prawej strony) wartość ze zmiennej tymczasowej
            }
        }

    }

