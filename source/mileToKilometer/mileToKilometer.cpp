#define CATCH_CONFIG_RUNNER
#include <cmath>
#include <iostream>
#include "catch.hpp"

double mileToKilometer()
{
    double miles = 0;
    std::cout << "Bitte geben Sie die Meilen ein, die Sie umrechnen möchten:\n";
    std::cin >> miles;
    
    if(miles <= 0){
        return 0;
    }
    else{
    double km = miles * 1.60934;        //formel zum Umrechnen in km
        std::cout << "Das sind in Kilometern: " << km;
    }
    return 0;
}

/*Test Case und test main funktion können bei bedarf wieder eingefügt werden, stören aber sonst bei der Interaktivität
 
 TEST_CASE("testing_ mileToKilometer" , "[mileToKilometer]")
{
    REQUIRE(mileToKilometer(5.0) == Approx(8.0467));
    REQUIRE(mileToKilometer(3.3) == Approx(5.310822));
   
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    return 0;
} */

int main()
{
    mileToKilometer();
}
