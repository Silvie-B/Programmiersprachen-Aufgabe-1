#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"

int factorial(int zahl)
{
    int fakultaet;
    if(zahl > 1){
         fakultaet = zahl * factorial(zahl - 1);
    }
    else{
        return 1;
    }
    return fakultaet;
}

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
