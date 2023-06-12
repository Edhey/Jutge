/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 15 2023
  * @brief Programa que, dados dos intervalos, calcule el intervalo 
  * correspondiente a su intersección, o diga que está vacío. Se aseume que
  * a1≤ b1 and a2≤ b2.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P51126_en
  */

#include <iostream>

/** Funcion que imprime la introduccion del programa
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee un número e imprime su cantidad de dígitos."; 
  std::cout <<  std::endl;
  std::cout <<  "Escribe cuatro números enteros a1, b1, a2, b2 que representen "
  << "los intervalos [a1, b1] y [a2, b2]: "; 
  std::cout << std::endl;
}

/** @brief Función que dado 4 números formando dos intervalos imprime su 
  * intervalo intersección.
  * @param intervalo1a Es el primer número del primer intevalo.
  * @param intervalo1b Es el segundo número del primer intevalo.
  * @param intervalo2a Es el primer número del segundo intevalo.
  * @param intervalo2b Es el segundo número del segundo intevalo.
  */
void Interseccion(int intervalo1a, int intervalo1b, int intervalo2a,
int intervalo2b) {
  int minimo_de_la_interseccion{}, maximo_de_la_interseccion{};
  if (intervalo1b >= intervalo2a && intervalo1a <= intervalo2b) {
    if (intervalo1a > intervalo2a) {
      minimo_de_la_interseccion = intervalo1a;
    } else {
      minimo_de_la_interseccion = intervalo2a;
    }
    if (intervalo1b < intervalo2b) {
      maximo_de_la_interseccion = intervalo1b;
    } else {
      maximo_de_la_interseccion = intervalo2b;
    }
    std::cout << "[" << minimo_de_la_interseccion << "," 
    << maximo_de_la_interseccion << "]" << std::endl;
  } else {
    std::cout << "[]" << std::endl;
  }
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int intervalo1a{}, intervalo1b{}, intervalo2a{}, intervalo2b{};
  std::cin >> intervalo1a >> intervalo1b >> intervalo2a >> intervalo2b;
  Interseccion(intervalo1a, intervalo1b, intervalo2a, intervalo2b);
}