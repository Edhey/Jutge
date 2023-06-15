/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que diga si el año dado es un año bisiesto o no. Para
 * recordar las reglas sobre los años bisiestos, consulta el ejercicio P61634:
 * “Años bisiestos”.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P95401_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que diga si el año dado es un año bisiesto o no."
            << std::endl;
  std::cout << "Introduzca una fecha:" << std::endl;
}

/**
 * @brief Función que comprueba si un número es multiplo de 4.
 * @param numero número que se comprueba.
 * @return 0: si es múltiplo.
 *         1: si no lo es.
 */
int MultipleOf4(int numero) {
  int const kMultiplo_4 = 4;
  if (numero % kMultiplo_4 == 0) {
    return 0;
  } else {
    return 1;
  }
}

/**
 * @brief Función que comprueba si un número es multiplo de 100.
 * @param numero número que se comprueba.
 * @return 0: si es múltiplo.
 *         1: si no lo es.
 */
int MultipleOf100(int numero) {
  int const kMultiplo_100 = 100;
  if (numero % kMultiplo_100 == 0) {
    return 0;
  } else {
    return 1;
  }
}

/**
 * @brief Función que devuelve los dos primeros digitos de un número de 4
 * cifras.
 * @param numero
 * @return
 */
int FirstDigits(int numero) {
  int const kMultiplo_100 = 100;
  int division = numero / kMultiplo_100;
  return division;
}

/**
 * @brief Función que comprueba si un año dado es bisiesto.
 * @param year año a comprobar.
 * @return true: si es bisiesto.
 *         false: en caso contratio.
 */
bool is_leap_year(int year) {
  if ((MultipleOf4(year) == 0) && (MultipleOf100(year) != 0)) {
    return 1;
  } else if (MultipleOf4(year) == 0 && MultipleOf100(year) == 0 &&
             MultipleOf4(FirstDigits(year)) == 0) {
    return 1;
  } else {
    return 0;
  }
}

/**
 * @brief Función main
 */
int main() {
  Introduccion();
  int year;
  while (std::cin >> year) {
    if (is_leap_year(year))
      std::cout << "true" << std::endl;
    else
      std::cout << "false" << std::endl;
  }
  return 0;
}