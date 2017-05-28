#ifndef FILTER_HPP
#define FILTER_HPP
#include <algorithm>
#include <vector>

template<typename T, class Generator>
T filter(T const& a, Generator const& g)
{
  T b{};
  for (auto&& ia : a)
  {
    if (g(ia))
    {
      b.push_back(ia);       
    }
  }
  return b;
}

#endif 