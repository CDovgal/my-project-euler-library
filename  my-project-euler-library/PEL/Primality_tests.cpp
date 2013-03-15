#include "stdafx.h"

#include "Primality_tests.h"

#include <cmath>

__declspec(dllexport) bool primality_tests::Trial_Division(size_t i_number)
	{
	if (i_number % 2 == 0)
		return false;
  
  long long i_sqrt = long long (sqrt(double(i_number))) + 1;

	for(long long i = 3; i < i_sqrt; i += 2)
		if (i_number % i == 0)
			return false;
  
  return true;
	}