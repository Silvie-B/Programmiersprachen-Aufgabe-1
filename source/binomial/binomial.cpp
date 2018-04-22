#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"
#include <iostream>

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

int binomial ( int n, int k)
{
    int ergebnis = factorial(n) / ( factorial(n-k) * factorial(k));
    return ergebnis;
}

TEST_CASE("testing_binomial" , "[binomial]")
{
    REQUIRE(binomial(7, 3) == 35);
    REQUIRE(binomial(13, 13) == 1);
    REQUIRE(binomial(0, 5) == 0);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    return 0;
}

