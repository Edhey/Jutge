/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 14 2023
  * @brief Programa
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P43850_en
  */


/**
El truco se basa en una serie de operaciones donde si el número original es 
positivo, dado el número final, el original será los 3 primeros digitos de dicho
número restando 1 en las unidades.
X = (((((Y * 5) + 6) * 4) + 9) * 5)
X = (((Y * 5 * 4 * 5) + (6 * 4 * 5) + (9 * 5)
X = (100Y) + 120 + 45
(X - 165) / 100 = Y
*/

#include <iostream>

int NumeroMagico(int numero) {
  int numero_original{};
  const int kNumero165{165}, kNumero100{100};
  numero_original = (numero - kNumero165) / kNumero100;
  return numero_original;
}

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee una entrada que consta de varios números "
  << "enteros. Todos ellos estarán entre 0 y 2 31 -1. El programa imprimirá el "
  << "número original pensado por la computadora.";
  std::cout <<  std::endl;
  std::cout <<  "Escribe tantos números como quieras: "; 
  std::cout << std::endl;
}

int main() {
  // Introduccion();
  int numero;
  while (std::cin >> numero) {
    std::cout << NumeroMagico(numero) << std::endl;
  }
} 