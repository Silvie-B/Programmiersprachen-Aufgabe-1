#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"

double fract(double kommazahl)
{
    if(kommazahl <= 0){     //wenn die zahl 0 ist, nichts zu berechnen, programm beendet
        return 0;
    }
        else{
            int vorkomma = (int) kommazahl;        //typumwandlung in int und speichern in vorkomma, dadurch werden die Nachkommastellen abgeschnitten
            double nachkomma = kommazahl - vorkomma;   // nachkomma wird berechnet durch die vorkommastellen minus die ganze kommazahl
            return nachkomma;       //nachkommastellen werden zurückgegeben
        }
}

TEST_CASE("testing_fract" , "[fract]")
{
    REQUIRE(fract(3.120) == Approx(0.120));
    REQUIRE(fract(3.14159265359) == Approx(0.14159265359));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}

