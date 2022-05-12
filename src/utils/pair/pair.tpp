#ifndef PAIR_PAIR_TPP
#define PAIR_PAIR_TPP

#include "pair.hpp"

namespace ft {

/// operator

template <class T1, class T2>
pair<T1, T2>& pair<T1, T2>::operator=(const pair<T1, T2>& p) {
  if (this != &p) {
    first = p.first;
    second = p.second;
  }
  return *this;
}

/// relational operators

template <class T1, class T2>
bool operator==(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
  return lhs.first == rhs.first and lhs.second == rhs.second;
}

template <class T1, class T2>
bool operator!=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
  return not(lhs == rhs);
}

template <class T1, class T2>
bool operator<(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
  return lhs.first < rhs.first or
         (not(rhs.first < lhs.first) and lhs.second < rhs.second);
}

template <class T1, class T2>
bool operator>(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
  return lhs > rhs;
}

template <class T1, class T2>
bool operator<=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
  return lhs == rhs or lhs < rhs;
}

template <class T1, class T2>
bool operator>=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
  return lhs == rhs or lhs > rhs;
}

/// make_pair

template <class T1, class T2>
pair<T1, T2> make_pair(T1 x, T2 y) {
  return (pair<T1, T2>(x, y));
}

}  // namespace ft

#endif  // PAIR_MAKE_PAIR_TPP