#ifndef _NUMBER_H_
#define _NUMBER_H_

class Number {
public:
  Number(double);
  Number(long long);

  operator bool();

  Number operator +(const Number&) const;
  Number operator -(const Number&) const;
  Number operator *(const Number&) const;
  Number operator /(const Number&) const;

  bool operator >(const Number&) const;
  bool operator <(const Number&) const;
  bool operator >=(const Number&) const;
  bool operator <=(const Number&) const;

  static Number mean(const Number &, const Number&);

private:
  double value;

};

#endif // _NUMBER_H_
