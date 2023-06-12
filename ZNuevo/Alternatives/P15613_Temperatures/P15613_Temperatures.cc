/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jan 30 2023
 * @brief Programa que lee un número entero que representa a una temperatura
 * dada en grados celcius y que diga si hace calor, si hace frío o si está
 * templado. Suponemos que hace calor si la temperatura es superior a 30
 * grados, que hace frío si la temperatura es inferior a 10 grados y que está
 * templado en caso contrario. Además, advierta si con la temperatura dada el
 * agua herviría o si se congelaría. Suponga que el agua hierve a 100 o más
 * grados y que el agua se congela a 0 o menos grados.
 * @bug No hay errores conocidos
 * @see https://jutge.org/problems/P15613_en
 */

#include <iostream>

void Temperatura(const int&);
void Agua(const int&);

int main() {
  int temperatura{};
  std::cin >> temperatura;
  Temperatura(temperatura);
  Agua(temperatura);
}

void Temperatura(const int& temperatura) {
  if (temperatura < 10) {
    std::cout << "it's cold" << std::endl;
  } else if (temperatura > 30) {
    std::cout << "it's hot" << std::endl;
  } else {
    std::cout << "it's ok" << std::endl;
  }
}

void Agua(const int& temperatura) {
  if (temperatura <= 0) {
    std::cout << "water would freeze" << std::endl;
  } else if (temperatura >= 100) {
    std::cout << "water would boil" << std::endl;
  }
}