#include "stdafx.h"

#include "Primality_tests.h"

SUITE( Primes )
  {

  TEST( primality_test )
    {
    using namespace primality_tests;
    CHECK(  Trial_Division(7) );
    CHECK( !Trial_Division(22) );
    CHECK(  Trial_Division(13) );
    }

  }