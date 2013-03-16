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

__declspec(dllexport)  vector<size_t> get_vector(size_t i_number)
  {
  vector<size_t> ret_val;

  while(i_number > 0)
    {
    ret_val.push_back(i_number % 10);
    i_number /= 10;
    }

  reverse( begin(ret_val),end(ret_val) );

  return ret_val;
  }

__declspec(dllexport)  size_t get_number(const vector<size_t>& i_vector)
  {
  size_t sum = 0;
  size_t powr = 1;
  
  for_each(i_vector.rbegin(),i_vector.rend(),[&] (size_t digit)
    {
//    size_t powr = 1;
    sum += digit*powr;
    powr *= 10;
    });

 return sum;
  }
/*
__declspec(dllexport)  vector<size_t> get_reverse(const vector<size_t>& i_vector)
  {
  vector<size_t> ret;
  ret.reserve(i_vector.size());

  copy( begin(ret), end(ret), i_vector.rbegin() );
  return ret;
  
}
  */