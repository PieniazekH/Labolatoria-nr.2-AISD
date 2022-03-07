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
        int temp = tablica[i];
        int j=i-1;
        while(j>=0 && tablica[j]>temp){      // petla przechodzaca po elementach tablicy, ale zawsze do elementu pomniejszonego o wartość zmiennej "i"
              tablica[j+1]=tablica[j];                          // porównywanie elementu kolejnego z poprzednim
                j--;
                tablica[j+1]=temp;        // kolejnemu elementowi(temu po prawej stronie) zostaje przypisana wartość przechowywana w zmiennej temp
            }
        }

    }

