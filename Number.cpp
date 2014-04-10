#include <cmath>

#include "Number.h"

Number::Number(double v):
  value(v)
{}

Number::Number(long long v):
  value(v)
{}

Number::operator bool() {
  return (!std::isnan(value)) && (value != 0.0);
}

Number Number::operator +(const Number& that) const {
  return Number(value + that.value);
}

Number Number::operator -(const Number& that) const {
  return Number(value - that.value);
}

Number Number::operator *(const Number& that) const {
  return Number(value * that.value);
}

Number Number::operator /(const Number& that) const {
  return Number(value / that.value);
}

bool Number::operator >(const Number& that) const {
  return value > that.value;
}

bool Number::operator <(const Number& that) const {
  return value < that.value;
}

bool Number::operator >=(const Number& that) const {
  return value >= that.value;
}

bool Number::operator <=(const Number& that) const {
  return value <= that.value;
}

Number Number::mean(const Number & first, const Number& second) {
  return Number((first.value + second.value) / 2.0);
}
