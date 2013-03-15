#pragma once

#include <vector>
namespace primes_to_n
  {
//  typedef std::vector<size_t> TPrimes;

  __declspec(dllexport) std::vector<size_t> sieve_of_Eratosthenes(size_t i_limit);
  }