#include <cmath>
#include "iostream"

int main()
{
    int sum = 0;            //Hilfsvariable zum speichern der Zwischenergebnisse
    int i = 1;              //wir beginnen mit 1
    
    while(i <= 1000){          //solange i kleiner 1000 wird die Schleife durchlaufen
        if(i % 3 == 0 || i % 5 == 0){       //Bedingung: i muss durch 3 oder 5 teilbar sein, wenn ja kommt bei % 0 raus
            sum+=i;                         //Hilfsvariable wird mit i addiert
        }
        i++;                                //i wird um 1 erhöht, Schleife wird erneut durchlaufen
    }
    std::cout << "Summe ist " << sum << std::endl;     //Ausgabe vom Endergebnis
    return 0;
}
