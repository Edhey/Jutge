/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 01 2023
 * @brief Programa que intenta leer un número racional dado en la forma
 * “numerador” / “denominador”, y almacena estos dos valores en num y den,
 * respectivamente. Además, debe eliminar todos los factores comunes de num y
 * den. Además, si la entrada tenía un número racional, debe devolver verdadero;
 * de lo contrario, debe devolver un falso. Por ejemplo, este código int num,
 * den; while (read_rational (num, den)) cout << num << ' ' << den << endl;
 * con esta entrada
 * 66/12
 * 100/100
 * debería imprimir:
 * 11 2
 * 1 1
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P93157_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que intenta leer un número racional dado en la forma "
               "“numerador” / “denominador”, y almacena estos dos valores en "
               "num y den, respectivamente. Además, debe eliminar todos los "
               "factores comunes de num y den. Además, si la entrada tenía un "
               "número racional, debe devolver verdadero; de lo contrario, "
               "debe devolver un falso."
            << std::endl;
  std::cout
      << "Introduzca un número racional de la forma numerador/denominador:"
      << std::endl;
}

/**
 * @brief Función que calcula el máximo común divisor de dos números naturales a
 * y b utilizando la versión rápida del algoritmo euclidiano.
 * @param a entero del que se calcula el máximo común divisor.
 * @param b entero del que se calcula el máximo común divisor.
 * @return máximo común divisor de los dos números.
 */
int gcd(int a, int b) {
  while (b != 0) {
    int aux{b};
    b = a % b;
    a = aux;
  }
  return a;
}

/**
 * @brief Programa que intenta leer un número racional dado en la forma
 * “numerador” / “denominador”, y almacena estos dos valores en num y den,
 * respectivamente. Además, debe eliminar todos los factores comunes de num y
 * den. Además, si la entrada tenía un número racional, debe devolver verdadero;
 * de lo contrario, debe devolver un falso.
 * @param num es el numerador del racional.
 * @param den es el denominador del racional.
 * @return true si es racional.
 *         false si no es racional.
 */
bool read_rational(int& num, int& den) {
  std::string racional;
  std::cin >> racional;
  bool barra;
  for (auto &&i : racional) {
    if (i == '/') {
      barra = true;
    }
  }
  if (barra == false) return false;
  num = 0;
  den = 0;
  for (int i{0}; i < racional.find('/') - 1; ++i) {
    num += racional[i] - '0';
    num *= 10;
  }
  num += racional[racional.find('/') - 1] - '0';
  for (int i{racional.find('/') + 1}; i < racional.length() - 1; ++i) {
    den += racional[i] - '0';
    den *= 10;
  }
  den += racional[racional.length() - 1] - '0';
  int const mcd{gcd(num, den)};
  num /= mcd;
  den /= mcd;
  return true;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  int num, den;
  while (read_rational(num, den)) std::cout << num << ' ' << den << std::endl;
  return 0;
}