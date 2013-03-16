#pragma once

#include <iostream>
#include <vector>

__declspec(dllexport) std::ostream& operator<< (std::ostream& i_str, const std::vector<size_t>& i_v);

__declspec(dllexport) std::ostream& operator<< (std::ostream& i_str, const std::vector<std::pair<size_t,size_t>>& i_v);

// get i_number in vector<size_t> presentation per digit
__declspec(dllexport)  std::vector<size_t> get_vector(unsigned long long i_number);

// need test
__declspec(dllexport)  std::vector<size_t> get_reverse_vector(unsigned long long i_number);

// get number from vector<size_t> presentation
__declspec(dllexport)  unsigned long long get_number(const std::vector<size_t>& i_v);

__declspec(dllexport)  std::vector<size_t> get_reverse(const std::vector<size_t>& i_v);