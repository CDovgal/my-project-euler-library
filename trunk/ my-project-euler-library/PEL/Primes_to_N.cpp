#include "stdafx.h"

#include <algorithm>

#include "Primes_to_N.h"

namespace
  {
    std::vector<size_t>& set_value(std::vector<size_t>& input)
    {
    size_t size = input.size();
    for( size_t i = 0; i < size; ++i)
      input[i] = i;

    return input;
    }
  }

__declspec(dllexport) std::vector<size_t> primes_to_n::sieve_of_Eratosthenes(size_t i_limit)
  {
  std::vector<size_t> sieve;
  sieve.resize(i_limit + 1);

  set_value(sieve);

  sieve[0] = sieve[1] = 0;

  size_t length = i_limit;
  size_t half_length = length/2 + 1;

  for(size_t i = 2; i <= half_length; ++i)
    for(size_t j = i*2; j <= length; j += i)
      sieve[j] = 0;

  size_t i=0;
  std::remove_if(sieve.begin(),sieve.end(),[&i] (size_t in) 
    {
    if(in == 0)
      ++i;
    return in == 0;
    });

  sieve.resize(i_limit+1-i);
  return sieve;
  }