/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 05 2023
 * @brief Programa que, dada una secuencia de palabras, imprima el número de
 * palabras entre la palabra "beginning" y la palabra "end". Si falta la palabra
 * “beginning”, la palabra “end” o ambas palabras, o si aparecen en orden
 * inverso, lo indíca.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P12061_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que, dada una secuencia de palabras, imprima el "
               "número de palabras entre la palabra “beginning” y la palabra "
               "“end”.Si falta la palabra “beginning”, la palabra “end” o "
               "ambas palabras, o si aparecen en orden inverso, lo indíca."
            << std::endl;
  std::cout << "La entrada consta de varias palabras. Las palabras “comienzo” "
               "y “final” aparecen, como máximo, una vez."
            << std::endl;
}

/**
 * @brief Función que, dada una palabra de inicio y otra de fin, imprime el
 * número de palabras entre dichas palabras. Si falta la palabra de inicio, la
 * palabra de fin o ambas palabras, o si aparecen en orden inverso, lo indíca.
 * @param inicio Es la palabra a partir de la cual se empieza a contar.
 * @param fin Es la palabra a partir de la cual se termina de contar.
 */
void WordsBetweenTwoWords(std::string inicio, std::string fin) {
  std::string palabra;
  int contador{0};
  bool comienza{false};
  while (std::cin >> palabra) {
    if (comienza && palabra == inicio) {
      std::cout << "wrong sequence" << std::endl;
      return;
    }
    if (!comienza && palabra == fin) {
      std::cout << "wrong sequence" << std::endl;
      return;
    }
    if (comienza && palabra == fin) {
      std::cout << contador << std::endl;
      return;
    }
    if (comienza)
      ++contador;
    if (palabra == inicio)
      comienza = true;
  }
  std::cout << "wrong sequence" << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  WordsBetweenTwoWords("beginning", "end");
  return 0;
}