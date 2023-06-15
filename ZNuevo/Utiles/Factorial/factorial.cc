/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date XXX XX 2023
 * @brief Programa que 
 * @bug No hay errores conocidos
 * @see 
 */
 
#include <iostream>
 
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
 * @brief Función que imprime el propósito del programa
 */
void Introduccion() {
  std::cout << "Factorial de un número" << std::endl;
  std::cout << "Introduzca un número: " << std::endl;
}
 
 /**
 * @brief Función main
 */
int main() {
  Introduccion();
  int numero{};
  std::cin >> numero;
  std::cout << Factorial(numero) << std::endl;
  return 0;
}