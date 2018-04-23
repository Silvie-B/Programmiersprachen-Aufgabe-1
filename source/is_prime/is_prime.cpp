#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"

bool is_prime (int zahl) {
    
    int i;
    bool prim;
        
    for(i = 2; i < sqrt(zahl); i++){    //Man braucht nur von 2 bis zur wurzel der zahl testen, alle größer der Wurzel können keine Teiler sein
        if (zahl % i == 0){             //wenn zahl mod i = 1 dann ist i kein teiler von zahl und zahl damit nicht prim
            prim = false;
        }
        else{
            prim = true;
        }
    }
    return prim;
}


TEST_CASE("testing_is_prime" , "[is_prime]")
{
    REQUIRE(is_prime(42) == false);
    REQUIRE(is_prime(7) == true);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    return 0;
}


