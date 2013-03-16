#include "stdafx.h"

#include "Lexical_handle.h"

using namespace std;

SUITE( lexical_handle_test )
  {
  vector<size_t> test_example;

  TEST ( no_test_just_start_condition )
    {
    test_example.push_back(1);
    test_example.push_back(1);
    test_example.push_back(0);
    test_example.push_back(9);
    }

  TEST( get_vector_test )
    {
    vector<size_t> control_example =
      get_vector(1109);

    CHECK ( equal( begin(test_example), end(test_example), begin(control_example)) );
    }

  TEST( get_number_test )
    {
    CHECK( 1109 == get_number(test_example) );
    }
  }