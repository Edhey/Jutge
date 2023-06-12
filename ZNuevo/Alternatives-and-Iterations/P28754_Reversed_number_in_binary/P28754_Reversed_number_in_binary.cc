/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 05 2023
  * @brief Programa que lee un número e imprime su representación binaria al revés.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P28754_en
  */

#include <iostream>
#include <vector>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa que lee un número e imprime su representación binaria"
  << " al revés." << std::endl;
  std::cout << "Escribe un número: " << std::endl;
}

/** @brief Función que lee un número pasado como parámetro e imprime su 
  * representación binaria al revés.
  * @param numero Numero del cuál se imprimirá su representación binaria al revés.
  * @return Vector de enteros donde cada componente es uno de los 0 o 1 que 
  * forman la representación en binario al revés del número.
  */
std::vector<int> NumeroEnBinarioAlReves(int numero) {
  const int kNumero2{2}, kNumero10 {10};
  std::vector<int> numero_binario_al_reves{};
  while (numero / kNumero2 != 0) {
    numero_binario_al_reves.emplace_back(numero % kNumero2);
    numero /= kNumero2;
  }
  numero_binario_al_reves.emplace_back(numero);
  return numero_binario_al_reves;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero{};
  std::cin >> numero;
  for (const int componente : NumeroEnBinarioAlReves(numero)) {
    std::cout << componente;
  }
  std::cout << std::endl;
} 