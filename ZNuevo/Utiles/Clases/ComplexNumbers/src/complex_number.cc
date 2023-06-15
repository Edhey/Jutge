/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Definición de los métodos de la clase Complex_number
 * @bug No hay errores conocidos
 * @see
 */

#include "complex_number.h"

#include <cmath>

/**
 * @brief Destructor de la clase ComplexNumber.
 */
ComplexNumber::~ComplexNumber() {}

/**
 * @brief Sobrecarga del operador de suma para sumar dos números complejos.
 * @param complejo Número complejo que se sumará del objeto actual.
 * @return Nuevo objeto ComplexNumber que representa el resultado de la suma.
 */
ComplexNumber ComplexNumber::operator+(const ComplexNumber& complejo) const {
  return ComplexNumber(this->real_ + complejo.real_,
                       this->imaginario_ + complejo.imaginario_);
}

/**
 * @brief Sobrecarga del operador de resta para restar dos números complejos.
 * @param complejo Número complejo que se restará del objeto actual.
 * @return Nuevo objeto ComplexNumber que representa el resultado de la resta.
 */
ComplexNumber ComplexNumber::operator-(const ComplexNumber& complejo) const {
  return ComplexNumber(this->real_ - complejo.real_,
                       this->imaginario_ - complejo.imaginario_);
}

/**
 * @brief Sobrecarga del operador de multiplicación para multiplicar dos números
 * complejos.
 * @param complejo Número complejo por el que se multiplicará el objeto actual.
 * @return Nuevo objeto ComplexNumber que representa el resultado de la
 * multiplicación.
 */
ComplexNumber ComplexNumber::operator*(const ComplexNumber& complejo) const {
  return ComplexNumber(
      this->real_ * complejo.real_ - this->imaginario_ * complejo.imaginario_,
      this->real_ * complejo.imaginario_ + this->imaginario_ * complejo.real_);
}

/**
 * @brief Sobrecarga del operador de división para dividir dos números
 * complejos.
 * @param complejo Número complejo por el que se dividirá el objeto actual.
 * @return Nuevo objeto ComplexNumber que representa el resultado de la
 * división.
 */
ComplexNumber ComplexNumber::operator/(const ComplexNumber& complejo) const {
  double divisor(complejo.real_ * complejo.real_ +
                 complejo.imaginario_ * complejo.imaginario_);
  return ComplexNumber((this->real_ * complejo.real_ -
                        this->imaginario_ * complejo.imaginario_) /
                           divisor,
                       (this->real_ * complejo.imaginario_ +
                        this->imaginario_ * complejo.real_) /
                           divisor);
}

/**
 * @brief Método de la clase ComplexNumber que devuelve el conjugado del número
 * complejo que la invoca.
 * @return conjugado del número complejo que la invoca.
 */
ComplexNumber ComplexNumber::Conjugado() const {
  return ComplexNumber(this->real_, -this->imaginario_);
}

/**
 * @brief Sobrecarga del operador de inserción de flujo para imprimir un objeto
 * ComplexNumber en un flujo de salida.
 * @param out Flujo de salida en el que se imprimirá el objeto ComplexNumber.
 * @param complejo Objeto ComplexNumber que se imprimirá en el flujo de salida.
 * @return Referencia al flujo de salida.
 */
std::ostream& operator<<(std::ostream& out, const ComplexNumber& complejo) {
  out << "(" << complejo.real_ << ", " << complejo.imaginario_ << ")";
  return out;
}

/**
 * @brief Sobrecarga del operador de extracción de flujo para leer un objeto
 * ComplexNumber desde un flujo de entrada.
 * @param in Flujo de entrada desde el que se leerá el objeto ComplexNumber.
 * @param complejo Objeto ComplexNumber en el que se almacenarán los valores
 * leídos desde el flujo de entrada.
 * @return Referencia al flujo de entrada.
 */
std::istream& operator>>(std::istream& in, ComplexNumber& complejo) {
  in >> complejo.real_ >> complejo.imaginario_;
  return in;
}

/**
 * @brief Calcula el valor absoluto del número complejo.
 * @return Valor absoluto del número complejo.
 */
double ComplexNumber::Abs() const {
  return sqrt(real_ * real_ + imaginario_ * imaginario_);
}

/**
 * @brief Método que calcula la forma exponencial del número complejo.
 * @return Nuevo objeto ComplexNumber que representa el complejo en forma
 * exponencial.
 */
ComplexNumber ComplexNumber::Exp() const {
  // std::exp() eleva el número e a real_.
  const double base = std::exp(real_);
  return ComplexNumber(base * std::cos(imaginario_),
                       base * std::sin(imaginario_));
}