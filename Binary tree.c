#include <stdio.h>

int main() {
    int ededler[] = {1, 3, 5, 7, 9}; 
    int say = 5;                     
    int axtarilan = 7;                
    int sol = 0, sag = say - 1;        
    int orta;                         
    int tapildi = -1;                 

    while (sol <= sag) {
        orta = (sol + sag) / 2;       

        if (ededler[orta] == axtarilan) {   
            tapildi = orta;
            break;
        }
        else if (ededler[orta] < axtarilan) {
            sol = orta + 1;           
        }
        else {
            sag = orta - 1;           
        }
    }

    if (tapildi != -1)
        printf("Tapildi: indeks %d\n", tapildi);
    else
        printf("Tapilmadi\n");

    return 0;
}
