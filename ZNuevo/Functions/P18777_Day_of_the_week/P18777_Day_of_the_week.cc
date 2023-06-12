/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date May 31 2023
 * @brief Programa que, dada una fecha válida hecha con un día d, un mes m y un
 * año y, devuelva su día de la semana, es decir, “ lunes ”, o “ martes ”, ...
 * Para calcularlo, usa la congruencia de Zeller. Sea d el día, m el mes y y el
 * año. Entonces, resta dos al mes m, y si el resultado es cero o menos, suma 12
 * al mes y resta uno al año. Llama m′ el nuevo mes y llama y′ el nuevo año.
 * Calcular el siglo c (los dos primeros dígitos del año) a partir del año y′.
 * Calcular el año a dentro del siglo (los dos últimos dígitos del año) a partir
 * del año  y ′. Calcular F  = ⌊ 2,6 m′ - 0,2 ⌋ +  re  +  un  + ⌊  un /4 ⌋ +
 * ⌊  C /4 ⌋ - 2 C. Finalmente, f módulo 7 nos da el resultado deseado, teniendo
 * en cuenta que 0 representa el domingo, 1 representa el lunes, 2 representa el
 * martes, … y 6 representa el sábado.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P18777_en
 */

#include <iostream>
#include <math.h>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout
      << "Programa que, dada una fecha válida hecha con un día d, un mes m y "
         "un año y, devuelva su día de la semana, es decir, “ lunes ”, o “ "
         "martes ”, ... Para calcularlo, usa la congruencia de Zeller. Sea d "
         "el día, m el mes y y el año. Entonces, resta dos al mes m, y si el "
         "resultado es cero o menos, suma 12 al mes y resta uno al año. Llama "
         "m′ el nuevo mes y llama y′ el nuevo año. Calcular el siglo c (los "
         "dos primeros dígitos del año) a partir del año y′. Calcular el año a "
         "dentro del siglo (los dos últimos dígitos del año) a partir del año  "
         "y ′. Calcular F  = ⌊ 2,6 m′ - 0,2 ⌋ +  re  +  un  + ⌊  un /4 ⌋ + "
         "⌊  C /4 ⌋ - 2 C. Finalmente, f módulo 7 nos da el resultado deseado, "
         "teniendo en cuenta que 0 representa el domingo, 1 representa el "
         "lunes, 2 representa el martes, … y 6 representa el sábado."
      << std::endl;
  std::cout << "Introduzca una fecha:" << std::endl;
}

// /**
//  * @brief Función que deduce si un número pasado como parámetro es múltiplo
//  * de 4.
//  * @param numero Número del cuál se deduce su multiplicidad con respecto
//  al 4.
//  */
// bool MultipleOf4(int numero) {
//   int const kMultiplo_4 = 4;
//   if (numero % kMultiplo_4 == 0) {
//     return 0;
//   } else {
//     return 1;
//   }
// }

// /**
//  * @brief Función que deduce si un número pasado como parámetro es múltiplo
//  de
//  * 100.
//  * @param numero Número del cuál se deduce su multiplicidad con respecto al
//  100.
//  */
// bool MultipleOf100(int numero) {
//   int const kMultiplo_100 = 100;
//   if (numero % kMultiplo_100 == 0) {
//     return 0;
//   } else {
//     return 1;
//   }
// }

// /**
//  * @brief Función que imprime los primeros 2 dígitos de un número pasado como
//  * parámetro.
//  * @param numero Número del cuál se imprimen sus primeros 2 dígitos.
//  */
// int FirstDigits(int numero) {
//   int const kMultiplo_100 = 100;
//   int division = numero / kMultiplo_100;
//   return division;
// }

// /**
//  * @brief Función que deduce si un año es bisiesto.
//  * @param numero Número del cuál se deduce .
//  */
// bool IsLeapYear(const int year) {
//   if ((MultipleOf4(year) == 0) && (MultipleOf100(year) != 0)) {
//     return 1;
//   } else if (MultipleOf4(year) == 0 && MultipleOf100(year) == 0 &&
//              MultipleOf4(FirstDigits(year)) == 0) {
//     return 1;
//   } else {
//     return 0;
//   }
// }

// /**
//  * @brief Función que dice si una fecha es correcta o no según el calendario
//  * gregoriano.
//  * @param dia día a analizar.
//  * @param mes mes a analizar.
//  * @param anyo año a analizar.
//  * @return true si es una fecha correcta.
//  *         false si no es una fecha correcta.
//  */
// bool FechaCorrecta(int dia, int mes, int anyo) {
//   if (dia < 1 || mes < 1 || anyo < 1800 || anyo > 9999 || mes > 12 ||
//       dia > 31) {
//     return false;
//   } else if (!IsLeapYear(anyo) && mes == 2 && dia > 28) {
//     return false;
//   } else if (mes == 2 && dia > 29) {
//     return false;
//   } else if ((mes > 7 && mes % 2 != 0 && dia > 30) ||
//              (mes <= 7 && mes % 2 == 0 && dia > 30)) {
//     return false;
//   } else {
//     return true;
//   }
// }

/**
 * @brief Función que, dada una fecha válida hecha con un día d, un mes m y un
 * año y, devuelva su día de la semana, es decir, “ lunes ”, o “ martes ”, ...
 * @param d dí a analizar.
 * @param m mes a analizar.
 * @param y año a analizar.
 * @return devuelve una string con el día de la semana del que se trata.
 */
std::string day_of_the_week(int d, int m, int y) {
  int dia{d}, mes{m}, anyo{y}, century, anyo_, fecha;
  m -= 2;
  if (m <= 0) {
    mes = m + 12;
    anyo = y - 1;
  } else {
    mes = m;
  }
  century = anyo / 100;
  anyo_ = anyo % 100;
  fecha = floor(2.6 * mes - 0.2) + dia + anyo_ + floor(anyo_ / 4) +
          floor(century / 4) - 2 * century;
  fecha %= 7;
  if (fecha < 0)
    fecha += 7;
  switch (fecha) {
  case 0:
    return "Sunday";
    break;
  case 1:
    return "Monday";
    break;
  case 2:
    return "Tuesday";
    break;
  case 3:
    return "Wednesday";
    break;
  case 4:
    return "Thursday";
    break;
  case 5:
    return "Friday";
    break;
  case 6:
    return "Saturday";
    break;
  default:
    return "Error inesperado";
    break;
  }
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::cout << day_of_the_week(28, 2, 2000) << std::endl;
  std::cout << day_of_the_week(29, 2, 2000) << std::endl;
  std::cout << day_of_the_week(1, 3, 2000) << std::endl;
  return 0;
}