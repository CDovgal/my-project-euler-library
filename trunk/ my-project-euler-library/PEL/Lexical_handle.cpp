#include "stdafx.h"

#include "Lexical_handle.h"

using namespace std;

__declspec(dllexport) ostream& operator<< (ostream& i_str, const vector<size_t>& i_v)
  {
  /*
  for_each(i_v.begin(), i_v.end(), [&i_str] (size_t i)
    {
    cout << i;	
    });
  cout << endl;
  */
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

  return get_reverse(ret_val);
  }

__declspec(dllexport)  size_t get_number(const vector<size_t>& i_v)
  {
  size_t ret = 0;
  size_t coeff = 1;

  for(int i = i_v.size()-1; i >= 0 ; --i)
    {
    ret += coeff*(i_v[i]);
    coeff *= 10;
    }

  return ret;
  }

__declspec(dllexport)  vector<size_t> get_reverse(const vector<size_t>& ret_val)
  {
  vector<size_t> ret;
  for_each(ret_val.crbegin(), ret_val.crend(), [&ret] (size_t i)
    {
    ret.push_back(i);
    });

  return ret;
  }