/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 04 2023
 * @brief Programa que dada una sucesión formada únicamente por '('y')', indica
 * si los paréntesis cierran correctamente.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P31111_en
 */

#include <iostream>

/**
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Programa que dada una sucesión formada únicamente por '('y')', "
               "indica si los paréntesis cierran correctamente."
            << std::endl;
  std::cout << "Introduzca una suceción solo formada por paréntesis:"
            << std::endl;
}

/**
 * @brief Funcíon que lee una sucesión de caracteres e indica si los paréntesis
 * cierran correctamente.
 * @return true si los paréntesis se cierran correctamente.
 *         false true si los paréntesis no se cierran correctamente.
 */
bool OkeyParenthesis(std::string parentesis) {
  int i{0}, contador_parentesis{0};
  for (int i{0}; i < parentesis.size(); ++i) {
    if (parentesis[i] == '(') {
      ++contador_parentesis;
    } else if (parentesis[i] == ')') {
      --contador_parentesis;
    }
    if (contador_parentesis < 0)
      return false;
  }
  if (contador_parentesis > 0)
    return false;
  else
    return true;
}

/**
 * @brief Función main
 */
int main() {
  // Introduccion();
  std::string parentesis;
  std::cin >> parentesis;
  OkeyParenthesis(parentesis) ? std::cout << "yes" << std::endl
                              : std::cout << "no" << std::endl;
  return 0;
}