/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 14 2023
  * @brief Programa que lee un número real x >= 0 e imprima ⌊x⌋ (el piso de x), 
  * ⌈x⌉ (el techo de x) y el redondeo de x.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P92613_en
  */

#include <iostream> 

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lee un número real x >= 0 e imprima ⌊x⌋ (el piso de"
  << " x), ⌈x⌉ (el techo de x) y el redondeo de x." << std::endl;
  std::cout <<  "Escribe un número real: " << std::endl;
}

/** @brief Función que dado un número real positivo devuelve su aproximación 
  * entera.
  * @param numero Es aquel número del cual se aproxima.
  * @return numero aproximado.
  */
int AproximacionDeUnReal(double numero) {
  int suelo{static_cast<int>(numero)}, techo{};
  techo = suelo + 1;
  double resto{numero - suelo};
  if (resto < 0.5) {
    return suelo;
  } else {
    return techo;
  }
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  double numero{};
  int suelo{}, techo{};
  std::cin >> numero;
  suelo = static_cast<int>(numero);
  if (suelo != numero) {
    techo = suelo + 1;
  } else {
    techo = suelo;
  }
  std::cout << suelo << " " << techo << " " 
  << AproximacionDeUnReal(numero) << std::endl;
}