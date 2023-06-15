/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 13 2023
 * @brief Programa que imprime el seno y coseno de un número usado el polinoimo
 * de Taylor.
 * @bug No hay errores conocidos
 * @see
 */

#include <cmath>
#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que imprime el seno y coseno de un número usado el "
               "polinoimo de Taylor."
            << std::endl;
  std::cout
      << "Introduzca un número que funcionará de iteración máxima para Taylor: "
      << std::endl;
}

/**
 * @brief Función que devuelve el factorial de un número natural.
 * @param numero número natural del que devolver su factorial.
 * @return Devuelve el factorial del número pasado.
 */
int Factorial(int numero) {
  if (numero == 0)
    return 1;
  return numero * Factorial(numero - 1);
}

/**
 * @brief Función que imprime el coseno de un número usado el polinoimo de
 * Taylor para las n iteraciones dadas.
 * @param numero Es el número en el que se evalua el coseno.
 * @param iteracion cantidad de iteraciones que realiza el polinomio de Taylor.
 * @return Devuelve la aproximación del coseno para un número x con n
 * iteraciones en el polinomio de Taylor.
 */
double CosenoTaylor(double numero, int iteracion) {
  int potencia{0};
  double coseno{0.0};
  for (int i{0}; i < iteracion; ++i) {
    if (i % 2 == 0)
      coseno += pow(numero, potencia) / Factorial(potencia);
    else
      coseno -= pow(numero, potencia) / Factorial(potencia);
    potencia += 2;
  }
  return coseno;
}

/**
 * @brief Función que imprime el seno de un número usado el polinoimo de
 * Taylor para las n iteraciones dadas.
 * @param numero Es el número en el que se evalua el seno.
 * @param iteracion cantidad de iteraciones que realiza el polinomio de Taylor.
 * @return Devuelve la aproximación del seno para un número x con n iteraciones
 * en el polinomio de Taylor.
 */
double SenoTaylor(double numero, int iteracion) {
  int potencia{1};
  double seno{0.0};
  for (int i{0}; i < iteracion; ++i) {
    if (i % 2 == 0)
      seno += pow(numero, potencia) / Factorial(potencia);
    else
      seno -= pow(numero, potencia) / Factorial(potencia);
    potencia += 2;
  }
  return seno;
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero{}, iteracion{};
  while (std::cin >> numero >> iteracion) {
    std::cout << "Coseno: " << std::cos(numero) << std::endl;
    std::cout << "Coseno Taylor: " << CosenoTaylor(numero, iteracion)
              << std::endl;
    std::cout << "Seno: " << std::sin(numero) << std::endl;
    std::cout << "Seno Taylor: " << SenoTaylor(numero, iteracion) << std::endl;
  }

  return 0;
}
