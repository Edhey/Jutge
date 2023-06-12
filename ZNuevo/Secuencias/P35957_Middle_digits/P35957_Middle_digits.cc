/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 04 2023
 * @brief Programa que decida quién gana en el siguiente juego. Anna y Bernard
 * juegan a dicho juego: primero, inventan n números cada uno.
 * Posteriormente, y alternativamente, Anna escribe su primer número, Bernard
 * escribe su primer número, Anna escribe su segundo número, Bernard escribe su
 * segundo número, y así sucesivamente. El primero en escribir un número tal que
 * su dígito medio no sea el mismo que el dígito medio del número anterior,
 * pierde. (El primer número, siempre el de Anna, puede tener cualquier dígito
 * del medio.) Si alguien escribe un número con un número par de dígitos, pierde
 * inmediatamente. Si después de escribir los 2 n números nadie pierde, el juego
 * termina en empate.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P35957_en
 */

#include <cmath>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Anna y Bernard juegan el siguiente juego: primero, inventan n "
         "números cada uno. Posteriormente, y alternativamente, Anna escribe "
         "su primer número, Bernard escribe su primer número, Anna escribe su "
         "segundo número, Bernard escribe su segundo número, y así "
         "sucesivamente. El primero en escribir un número tal que su dígito "
         "medio no sea el mismo que el dígito medio del número anterior, "
         "pierde. (El primer número, siempre el de Anna, puede tener cualquier "
         "dígito del medio.) Si alguien escribe un número con un número par de "
         "dígitos, pierde inmediatamente. Si después de escribir los 2 n "
         "números nadie pierde, el juego termina en empate. Este programa "
         "decide quién ganó el juego"
      << std::endl;
  std::cout << "La entrada consta de un número natural n ≥ 1, seguido de 2 n "
               "números naturales a 1, b1, …, an, bn: a 1 es el primer número "
               "de Anna, b1 es el primer número de Bernard, a 2 es el segundo "
               "número de Anna, etcétera."
            << std::endl;
}

/**
 * @brief Funcíon que devuelve la cantidad de dígitos de un número.
 * @param numero es el número del que se cuentan los dígitos.
 * @return devuelve la cantidad de dígitos del número pasado.
 */
int CantidadDeDigitos(int numero) {
  const int kNumero10{10};
  int cantidad_de_digitos{0};
  while (numero / kNumero10 != 0) {
    ++cantidad_de_digitos;
    numero /= kNumero10;
  }
  ++cantidad_de_digitos;
  return cantidad_de_digitos;
}

/**
 * @brief Función que determina quién gana en el juego, tal que Anna y Bernard
 * juegan el siguiente juego: primero, inventan n números cada uno.
 * Posteriormente, y alternativamente, Anna escribe su primer número, Bernard
 * escribe su primer número, Anna escribe su segundo número, Bernard escribe su
 * segundo número, y así sucesivamente. El primero en escribir un número tal que
 * su dígito medio no sea el mismo que el dígito medio del número anterior,
 * pierde. (El primer número, siempre el de Anna, puede tener cualquier dígito
 * del medio.) Si alguien escribe un número con un número par de dígitos, pierde
 * inmediatamente. Si después de escribir los 2 n números nadie pierde, el juego
 * termina en empate.
 * @param cantidad_de_numeros cantidad de números a inventar.
 */
void WhoWins(int cantidad_de_numeros) {
  int numero_a, numero_b, digito_intermedio_a, digito_intermedio_b;
  int const kNumero10{10};
  std::cin >> numero_a;
  for (int i{0}; i < (cantidad_de_numeros * 2) - 1; ++i) {
    if (i % 2 == 0) {
      std::cin >> numero_b;
    } else {
      std::cin >> numero_a;
    }
    if (CantidadDeDigitos(numero_a) % 2 == 0) {
      std::cout << "B" << std::endl;
      return;
    } else if (CantidadDeDigitos(numero_b) % 2 == 0) {
      std::cout << "A" << std::endl;
      return;
    }
    if (CantidadDeDigitos(numero_a) == 1) {
      digito_intermedio_a = numero_a;
    } else {
      int division_a{floor(pow(kNumero10, CantidadDeDigitos(numero_a) / 2))};
      division_a = floor(numero_a / division_a);
      digito_intermedio_a = division_a % kNumero10;
    }
    if (CantidadDeDigitos(numero_b) == 1) {
      digito_intermedio_b = numero_b;
    } else {
      int division_b{floor(pow(kNumero10, CantidadDeDigitos(numero_b) / 2))};
      division_b = floor(numero_b / division_b);
      digito_intermedio_b = division_b % kNumero10;
    }
    if (digito_intermedio_a != digito_intermedio_b) {
      i % 2 == 0 ? std::cout << "A" << std::endl
                 : std::cout << "B" << std::endl;
      return;
    }
  }
  std::cout << "=" << std::endl;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int cantidad_de_numeros{};
  std::cin >> cantidad_de_numeros;
  WhoWins(cantidad_de_numeros);
  return 0;
}