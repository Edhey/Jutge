/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Declaración de los métodos de la clase Books
 * @bug No hay errores conocidos
 * @see
 */

#ifndef BOOKS_H
#define BOOKS_H

#include <iostream>

class Books {
public:
  Books() : titulo_ (""), anyo_(0), precio_(0) {}
  Books(std::string titulo, int anyo, double precio)
      : titulo_(titulo),
        anyo_(anyo), precio_(precio) {}
  double Impuesto(double porcentaje) const;
  double getPrecio() const;
  friend std::ostream& operator<<(std::ostream& out, const Books &libro);
  friend std::istream& operator>>(std::istream& in, Books& libro);

private:
  std::string titulo_;
  int anyo_;
  double precio_;
};

#endif