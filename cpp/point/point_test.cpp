// https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "point.h"

TEST_CASE("Test point construction", "[point]") {
    Point a;
    REQUIRE(a.getX() == 0.0);
    REQUIRE(a.getY() == 0.0);

    Point b(42., 42.);
    REQUIRE(b.getX() == 42.);
    REQUIRE(b.getY() == 42.);

    SECTION( "comparison operators" ) {
        REQUIRE((a == b) == false);
        REQUIRE((a != b) == true);
    }

    SECTION("arithmetic operators") {
        Point res;
        res = a + b;

        REQUIRE(res.getX() == 42.);
        REQUIRE(res.getY() == 42.);
    }
}

TEST_CASE("Test point incrementation", "[point]") {
    Point a(42., 42.);
    a.increment(8.);

    REQUIRE(a.getX() == 50.);
    REQUIRE(a.getY() == 50.);
}