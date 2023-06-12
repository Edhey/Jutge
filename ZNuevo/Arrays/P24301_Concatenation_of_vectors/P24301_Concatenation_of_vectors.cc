/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May Jun 2023
 * @brief Programa que devuelve la concatenación de v1 y v2. Es decir, debes
 * devolver un vector con los elementos de v1 seguidos de los elementos de v2.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P24301_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que devuelve la concatenación de v1 y v2. Es decir, "
               "debes devolver un vector con los elementos de v1 seguidos de "
               "los elementos de v2."
            << std::endl;
  std::cout << "Introduzca dos vectores:" << std::endl;
}

/**
 * @brief Función que devuelve la concatenación de v1 y v2. Es decir, debes
 * devolver un vector con los elementos de v1 seguidos de los elementos de v2.
 * @param v1 vector a concatenar.
 * @param v2 vector a concatenar.
 * @return devuelve otro vector con la concatenación de los dos pasados.
 */
std::vector<int> concatenation(const std::vector<int>& v1,
                               const std::vector<int>& v2) {
  std::vector<int> vector_concatenacion{};
  for (auto&& elemento : v1) {
    vector_concatenacion.push_back(elemento);
  }
  for (auto&& elemento : v2) {
    vector_concatenacion.push_back(elemento);
  }
  return vector_concatenacion;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::vector<int> v1{1, 2, 3, 5, 4, 6, 3}, v2{6, 7, 8, 4, 1, 23, 53, 2, 1}, v3;
  v3 = concatenation(v1, v2);
  for (auto &&elemento : v3) {
    std::cout << elemento << " ";
  }
  std::cout << std::endl;
  return 0;
}