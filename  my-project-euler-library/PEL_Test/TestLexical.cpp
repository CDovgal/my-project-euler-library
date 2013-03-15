#include "stdafx.h"

#include "Lexical_handle.h"

using namespace std;

namespace 
  {
  bool is_equal(const vector<size_t>& v1, const vector<size_t>& v2)
    {
    if ( v1.size() != v2.size() )
      return false;

    for(size_t i = 0; i < v1.size(); ++i)
      if ( v1[i] != v2[i] )
        return false;

    return true;
    }
  }

SUITE( lexical_handle_test)
  {
  vector<size_t> test_example;

  TEST( get_vector_test )
    {
    test_example.push_back(1);
    test_example.push_back(1);
    test_example.push_back(0);
    test_example.push_back(9);

    vector<size_t> control_example =
      get_vector(1109);

    cout << test_example << endl << control_example;
    CHECK ( is_equal(test_example,control_example) );
    }

  TEST( get_number_test )
    {
    CHECK( get_number(test_example) == 1109 );
    }
  }