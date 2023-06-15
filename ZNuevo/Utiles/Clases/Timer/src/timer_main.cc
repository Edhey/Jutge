/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @date Jun 16, 2023
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @brief Archivo main que ejecuta los métodos de la clase Timer
 * @see
 */

#include <cmath>

#include "timer.h"

/**
 * @brief Función que decide si un número es primo o no.
 * @param numero es el número a analizar.
 * @return true si es primo.
 *         false si no es primo.
 */
bool IsPrime(const int numero) {
  if (numero <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(numero);) {
    if (numero % i == 0) {
      return false;
    }
    if (i == 2)
      ++i;
    else
      i = i + 2;
  }
  return true;
}

/**
 * @brief Función main
 */
int main(int argc, char *argv[]) {
  int numero_de_parametros{};
  if (!CompruebaParametrosCorrectos(argc, argv, numero_de_parametros)) {
    return 1;
  }
  Timer chrono1;
  long limit{};
  std::cout << "Establezca un límite sobre el que buscar: ";
  std::cin >> limit;
  long contador_de_numeros_primos{0};
  std::cout << "Buscando números primos hasta " << limit << std::endl;
  chrono1.Reset();
  for (int number{2}; number <= limit; ++number) {
    if (IsPrime(number)) {
      ++contador_de_numeros_primos;
    }
  }
  std::cout << "Tiempo transcurrido: " << chrono1.Elapsed() << " ms"
            << std::endl;
  std::cout << "La cantidad de números primos hasta " << limit << " es "
            << contador_de_numeros_primos << std::endl;
}