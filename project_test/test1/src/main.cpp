#define CATCH_CONFIG_MAIN
#include "catch.hpp"
// ≤‚ ‘”√¿˝
TEST_CASE("test1", "[test1]")
{
  REQUIRE(1 == 1);
}

TEST_CASE("test2", "[test1]")
{
  REQUIRE(1 == 2);
}

TEST_CASE("test2", "[test1]")
{
  REQUIRE(1 < 2);
}