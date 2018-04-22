#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"

int factorial(int zahl)
{
    int fakultaet;      //Hilfsvariable zum speichern der berechneten Fakultaet
    if(zahl > 1){       //Solange die Zahl groesser 1 ist wird die Schleife rekursiv durchlaufen
         fakultaet = zahl * factorial(zahl - 1);    //rekursiver Aufruf der Funktion und multiplizieren mit zahl, Speichern des Zwischenergebnisses in fakultaet
    }
    else{
        return 1;
    }
    return fakultaet;
}
//Test der Funktion
TEST_CASE("testing_factorial" , "[factorial]")
{
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(6) == 720);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    return 0;
}
