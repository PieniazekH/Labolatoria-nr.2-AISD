#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {5,4,10,0,4,1,7,5,3,9,3,11,255,7,150}; //wczytanie tablicy
    bubbleSort(tablica);                                    // wywołanie funkcji
    for(int x=0; x<15; x++){
        printf("%d ", tablica[x]);      // wyswietlenie posortowanej tablicy
    }
    return 0;
}
void bubbleSort(int tablica[]){
    for(int i=0; i<14 ; i++){           //petla przechodzaca po wszystkich elementach tablicy
        for(int j=0; j<14-i; j++){          // petla przechodzaca po elementach tablicy od 1 do końcowego który jest pomniejszony o wartość zmiennej i
            if (tablica[j]>tablica[j+1]){       // warunek sprawdzajacy czy element wczesniejszy jest wiekszy od nastepnego
                int temp=tablica[j];       // jezeli warunek jest prawdziwy to do zmiennej tymczasowej przypisujemy element wczesniejszy (ten po lewej stronie)
                tablica[j]=tablica[j+1];  // element z prawej strony jest przypisywany do tego z lewej (nastepuje zamiana)
                tablica[j+1]=temp;         // element kolejny ( ten z prawej strony ) przyjmuje wartosc zmiennej tymczasowej
            }
        }
    }


}

