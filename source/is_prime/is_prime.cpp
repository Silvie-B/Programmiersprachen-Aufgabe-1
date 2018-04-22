#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"
#include <stdio.h>


bool is_prime (int zahl) {
    
    int i;
    bool prim;
        
    for(i = 2; i < sqrt(zahl); i++){
        if (zahl % i == 0){
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


