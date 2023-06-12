/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 09 2023
  * @brief Programa que lee varias fechas, y para cada una diga si es correcta o
  * no según el calendario gregoriano.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P29448_en
  */

#include <iostream>

/** @brief Función que imprime el propósito del programa
    */
void Introduccion() {
  std::cout << "Programa que lea varias fechas, y para cada"
  << "una diga si es correcta o no según el calendario gregoriano." << std::endl;
  std::cout << "Introduce una fecha: " << std::endl;
}

/** @brief Función que deduce si un número pasado como parámetro es múltiplo de 4.
  * @param numero Número del cuál se deduce su multiplicidad con respecto al 4. 
  */
bool MultipleOf4(int numero) {
  int const kMultiplo_4 = 4;
  if (numero % kMultiplo_4 == 0) {
    return 0;
  } else {
    return 1;
  }
}

/** @brief Función que deduce si un número pasado como parámetro es múltiplo de 100.
  * @param numero Número del cuál se deduce su multiplicidad con respecto al 100. 
  */
bool MultipleOf100(int numero) {
  int const kMultiplo_100 = 100;
  if (numero % kMultiplo_100 == 0) {
    return 0;
  } else {
    return 1;
  }
}

/** @brief Función que imprime los primeros 2 dígitos de un número pasado como 
  * parámetro.
  * @param numero Número del cuál se imprimen sus primeros 2 dígitos. 
  */
int FirstDigits(int numero) {
  int const kMultiplo_100 = 100;
  int division = numero / kMultiplo_100;
  return division;
}

/** @brief Función que deduce si un año es bisiesto.
  * @param numero Número del cuál se deduce . 
  */
bool IsLeapYear(const int year) {
  if ((MultipleOf4(year) == 0) and (MultipleOf100(year) != 0)) {
    return 1;
  } else if (MultipleOf4(year) == 0 and MultipleOf100(year) == 0 and
  MultipleOf4(FirstDigits(year)) == 0) {
    return 1;
  } else {
    return 0;
  }
}

/** @brief Función que dice si una fecha es correcta o no según el calendario gregoriano.
   * @param fecha 
   */
void FechaCorrecta(int dia, int mes, int anyo) {
  if (dia < 1 || mes < 1 || anyo < 1800 || anyo > 9999 || mes > 12 ||
  dia > 31) {
    std::cout << "Incorrect Date" << std::endl;
  } else if (!IsLeapYear(anyo) && mes == 2 && dia > 28) {
    std::cout << "Incorrect Date" << std::endl;
  } else if (mes == 2 && dia > 29) {
    std::cout << "Incorrect Date" << std::endl;
  } else if ((mes > 7 && mes % 2 != 0 && dia > 30) ||
  (mes <= 7 && mes % 2 == 0 && dia > 30)) {
    std::cout << "Incorrect Date" << std::endl;
  } else {
    std::cout << "Correct Date" << std::endl;
  }
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int dia, mes, anyo;
  while (std::cin >> dia >> mes >> anyo) {
    FechaCorrecta(dia, mes, anyo);
  }
}