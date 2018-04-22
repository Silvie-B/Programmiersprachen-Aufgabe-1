#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b)
{
    {
        if (a == 0)                          //Wenn a=0 ist b der größte gemeinsame Teiler laut Definition
        {
            return b;
        }
        while(b != 0)                        //So lange wiederholen, bis b = 0
        {
            if (a > b)
            {
                a = a - b;               //Wenn a größer b, subtrahiere b von a
            }
            else
            {
                b = b - a;               //Ansonsten a-b
            }
        }
        return a;                            //In a wird jetzt der ggT(a,b) gespeichert
    }
}

TEST_CASE("describe_gcd" , "[gcd]")
{
    REQUIRE( gcd(2,4) == 2);
    REQUIRE( gcd(9,6) == 3);
    REQUIRE( gcd(3,7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

