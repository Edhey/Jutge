/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Definición de los métodos de la clase Coche
 * @bug No hay errores conocidos
 * @see skafhjasp
 */

#include "Coche.h"

/**
 * @brief Constructor por defecto
 * @tparam T
 */
template <class T>
Coche<T>::Coche() {
  matricula_ = "125434L";
  marca_ = "Opel";
}

/**
 * @brief Constructor por parámetros.
 * @tparam T
 * @param marca Marca del coche
 * @param matricula Número de la matrícula
 */
template <class T>
Coche<T>::Coche(std::string marca, std::string matricula) {
  marca_ = marca;
  matricula_ = matricula;
}

/**
 * @brief Función que imprime la marca del coche.
 * @tparam T
 */
template <class T>
inline void Coche<T>::PrintMarca() const {
  std::cout << marca_ << std::endl;
}
/**
 * @brief Función que imprime la matrícula del coche.
 * @tparam T
 */
template <class T>
void Coche<T>::PrintMatricula() const {
  std::cout << matricula_ << std::endl;
}

template <class T>
std::ostream& operator<<(std::ostream& out, const Coche<T>& coche) {
  out << "Marca: ";
  coche.PrintMarca();
  out << "Matrícula: ";
  coche.PrintMatricula();
  return out;
}
