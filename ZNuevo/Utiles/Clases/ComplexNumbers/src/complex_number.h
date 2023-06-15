/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Declaración de los métodos de la clase ComplexNumber
 * @bug No hay errores conocidos
 * @see
 */

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H

#include <iostream>

class ComplexNumber {
public:
  ComplexNumber(double real = 1, double imaginario = 1.0)
      : real_(real), imaginario_(imaginario) {}
  ~ComplexNumber();
  friend std::ostream& operator<<(std::ostream& out,
                                  const ComplexNumber& complejo);
  friend std::istream& operator>>(std::istream& in, ComplexNumber& complejo);
  ComplexNumber operator+(const ComplexNumber& complejo) const;
  ComplexNumber operator-(const ComplexNumber& complejo) const;
  ComplexNumber operator*(const ComplexNumber& complejo) const;
  ComplexNumber operator/(const ComplexNumber& complejo) const;
  ComplexNumber Conjugado() const;
  ComplexNumber Exp() const;
  double Abs() const;

private:
  double real_;
  double imaginario_;
};

#endif