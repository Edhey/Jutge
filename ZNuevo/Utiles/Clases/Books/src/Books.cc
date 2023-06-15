/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Definición de los métodos de la clase Books
 * @bug No hay errores conocidos
 * @see
 */

#include "Books.h"

/**
 * @brief Método que aplica el porcentaje de impuesto pasado al precio del
 * objeto.
 * @param porcentaje Es el porcentaje de impuestos a aplicar.
 * @return Devuelve el nuevo precio del libro con el impuesto aplicado.
 */
double Books::Impuesto(double porcentaje) const {
  return precio_ + (precio_ * (porcentaje / 100));
}

/**
 * @brief Getter para el atributo precio_.
 * @return Devuelve el valor de precio_ del objeto.
 */
double Books::getPrecio() const { return precio_; }

/**
 * @brief Sobrecarga del operador de inserción de flujo para imprimir un objeto
 * Books en un flujo de salida.
 * @param out Flujo de salida en el que se imprimirá el objeto Books.
 * @param libro Objeto Books que se imprimirá en el flujo de salida.
 * @return Referencia al flujo de salida.
 */
std::ostream& operator<<(std::ostream& out, const Books& libro) {
  out << libro.titulo_ << ", " << libro.anyo_ << ", " << libro.precio_;
  return out;
}

/**
 * @brief Sobrecarga del operador de extracción de flujo para leer un objeto
 * Books desde un flujo de entrada.
 * @param in Flujo de entrada desde el que se leerá el objeto Books.
 * @param libro Objeto Books en el que se almacenarán los valores
 * leídos desde el flujo de entrada.
 * @return Referencia al flujo de entrada.
 */
std::istream& operator>>(std::istream& in, Books& libro) {
  in >> libro.titulo_ >> libro.anyo_ >> libro.precio_;
  return in;
}