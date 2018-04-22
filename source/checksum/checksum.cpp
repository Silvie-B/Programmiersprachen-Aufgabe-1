#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"

int checksum(int a)
{
    int sum = 0;
    {
        while(a != 0)
        {
            sum = sum + (a % 10); // Addieren der letzten ziffer der uebergebenen zahl zur summe
            
            a = a / 10;   // Entfernen der letzten Ziffer der uebergebenen zahl
        }
        return sum;
    }
}

TEST_CASE("testing_checksum" , "[checksum]")
{
    REQUIRE(checksum(118136) == 20);
    REQUIRE(checksum(42) == 6);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    return 0;
}
