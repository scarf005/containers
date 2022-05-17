#ifndef ENABLE_IF_HPP
#define ENABLE_IF_HPP

namespace ft {
template <bool Cond, typename T = void>
struct enable_if {};

template <typename T>
struct enable_if<true, T> {
  typedef T type;
};
}  // namespace ft

#endif  // ENABLE_IF_HPP
