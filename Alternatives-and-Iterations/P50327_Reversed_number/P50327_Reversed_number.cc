/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 05 2023
  * @brief Programa que lee un número y lo imprime al revés.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P50327_en
  */

#include <iostream>
#include <vector>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee un número y lo imprime al revés."; 
  std::cout <<  std::endl;
  std::cout <<  "Escribe un número: "; 
  std::cout << std::endl;
}

/** @brief Función que devuelve al revés un número pasado como parámetro.
   * @param numero Es el número que se imprimirá al revés.
   * @return Devuelve un vector donde cada componente contiene el número en 
   * orden inverso, leído de izquierda a derecha.
   */
std::vector<int> NumeroAlReves (int numero) {
  const int kNumero10{10};
  std::vector<int> numero_al_reves{};
    while (numero / kNumero10 != 0) {
      numero_al_reves.emplace_back(numero % kNumero10);
      numero /= kNumero10;
    }
    numero_al_reves.emplace_back(numero);
    return numero_al_reves;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero{};
  std::cin >> numero;
  for (auto componente : NumeroAlReves (numero)) {
    std::cout << componente; 
  }
  std::cout << std::endl;
}
