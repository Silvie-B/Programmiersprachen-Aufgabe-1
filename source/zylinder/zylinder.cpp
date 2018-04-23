#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <cmath>
#include "catch.hpp"
#include <iostream>

double oberflaeche(double r, double h)
{
    double oberfl;
    if(r >=0 && h >= 0){
        oberfl = 2 * M_PI * r * (r + h);    //Formel: O = 2*pi*r(r+h)
    }
    else{
        oberfl = 0;
    }
    return oberfl;
}

double volumen(double r, double h)
{
    double volumen;
    if(r >= 0 && h >= 0){
        volumen = M_PI * pow(r, 2) * h; //Formel: V = pi * r^2 * h
    }
    else{
        volumen = 0;
    }
    return volumen;
}

TEST_CASE("oberflaeche" , "[oberflaeche]")
{
    REQUIRE(oberflaeche(4.0, 4.0) == Approx(201.062));
    REQUIRE(volumen(4.0, 4.0) == Approx(201.062));
}

 
 int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    return 0;
}
