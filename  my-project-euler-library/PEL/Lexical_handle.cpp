#include "stdafx.h"

#include "Lexical_handle.h"

using namespace std;

__declspec(dllexport) ostream& operator<< (ostream& i_str, const vector<size_t>& i_v)
  {
  copy(begin(i_v),end(i_v),ostream_iterator<size_t>(i_str,""));
  return i_str;
  }

__declspec(dllexport) ostream& operator<< (ostream& i_str, const vector<pair<size_t,size_t>>& i_v)
  {
  for_each(i_v.begin(), i_v.end(), [&i_str] (const pair<size_t, size_t>& i_p)
    {
    cout << i_p.first << " " << i_p.second << endl;		
    });

  return i_str;
  }

__declspec(dllexport)  vector<size_t> get_vector(unsigned long long i_number)
  {
  auto ret_val = get_reverse_vector(i_number);

  reverse( begin(ret_val),end(ret_val) );

  return ret_val;
  }

__declspec(dllexport)  std::vector<size_t> get_reverse_vector(unsigned long long i_number)
  {
  vector<size_t> ret_val;

  while(i_number > 0)
    {
    ret_val.push_back(i_number % 10);
    i_number /= 10;
    }

  return ret_val;
  }

__declspec(dllexport)  unsigned long long get_number(const vector<size_t>& i_vector)
  {
  unsigned long long sum  = 0;
  unsigned long long powr = 1;
  
  for_each(i_vector.rbegin(),i_vector.rend(),[&] (unsigned long long digit)
    {
    sum += digit*powr;
    powr *= 10;
    });
  
 return sum;
  }

__declspec(dllexport)  std::vector<size_t> get_reverse(const std::vector<size_t>& i_v)
  {
  auto reverse_vector = i_v;
  reverse(begin(reverse_vector),end(reverse_vector));

  return reverse_vector;
  }