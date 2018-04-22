#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <cmath>
#include "catch.hpp"
#include <iostream>

double oberflaeche(double r, double h)
{
    double oberfl;
    if(r >=1 && h >= 1){
        oberfl = 2 * M_PI * r * (r + h);
    }
    else{
        return 1;
    }
    return oberfl;
}

double volumen(double r, double h)
{
    double volumen;
    if(r >= 1 && h >= 1){
        volumen = M_PI * pow(r, 2) * h;
    }
    else{
        return 1;
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


/*int main()
{
    double oberfl;
    oberfl = oberflaeche(4, 4);
    std::cout << "Die Oberfläche beträgt" << oberfl << std:: endl;
    double volumen1;
    volumen1 = volumen(4, 4);
    std::cout << "Das Volumen beträgt" << volumen1 << std::endl;
}*/
