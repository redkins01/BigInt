#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "BigInt.h"
#include <cstdlib>
#include "doctest.h"
#include <sstream>

TEST_CASE("BigInt") {

  SUBCASE("Addition") {
    ds::BigInt a("456");
    ds::BigInt b("1123");
    ds::BigInt r = a + b;
    std::stringstream ss;
    ss << r;
    CHECK(ss.str() == "1579");
  }

  SUBCASE("Less Than 1") {
    ds::BigInt a("10");
    ds::BigInt b("11");
    bool r = a < b;
    CHECK(r == true);
  }

  SUBCASE("Less Than 2") {
    ds::BigInt a("12");
    ds::BigInt b("11");
    bool r = a < b;
    CHECK(r == false);
  }


  SUBCASE("Subtraction 1") {
    ds::BigInt a("456");
    ds::BigInt b("1123");
    ds::BigInt r = a - b;
    std::stringstream ss;
    ss << r;
    CHECK(ss.str() == "667");
  }

  SUBCASE("Subtraction 2") {
    ds::BigInt a("100");
    ds::BigInt b("100");
    ds::BigInt r = a - b;
    std::stringstream ss;
    ss << r;
    CHECK(ss.str() == "0");
  }

  SUBCASE("Subtraction 3") {
    ds::BigInt a("3564977655549");
    ds::BigInt b("4528625862583");
    ds::BigInt r = a - b;
    std::stringstream ss;
    ss << r;
    CHECK(ss.str() == "963648207034");
  }

  SUBCASE("Subtraction 4") {
    ds::BigInt a("1456");
    ds::BigInt b("1123");
    ds::BigInt r = a - b;
    std::stringstream ss;
    ss << r;
    CHECK(ss.str() == "333");
  }

}