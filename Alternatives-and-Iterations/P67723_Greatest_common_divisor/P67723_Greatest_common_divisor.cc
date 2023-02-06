/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Feb 06 2023
  * @brief Programa que calcula el máximo común divisor de dos números.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P67723_en
  */  

#include <iostream>

/** Función que imprime la introduccion del programa
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que calcula el máximo común divisor de dos números" 
  << " enteros positivos." << std::endl;
  std::cout <<  "Escribe dos números enteros positivos: "
  << std::endl;
}

/** Función que imprime el Máximo Común Divisor de dos números naturales positivos.
  * @param numero1 Número del cual se hallará el M.C.D.
  * @param numero2 Número del cual se hallará el M.C.D.
  * @return Máximo Común Divisor de los dos números.
  */
int MaximoComunDivisor(const int numero1, const int numero2) {
  int mayor{}, menor{}, auxiliar{};
  if (numero1 > numero2) {
    mayor = numero1;
    menor = numero2;
  } else {
    mayor = numero2;
    menor = numero1;
  }
  while (menor != 0) {
    auxiliar = menor;
    menor = mayor % menor;
    mayor = auxiliar;
  }
  return auxiliar;
}

/** @brief Función main.
  */
int main() {
  // Introduccion();
  int numero1{}, numero2{};
  std::cin >> numero1 >> numero2;
  std::cout << "The gcd of " << numero1 << " and " << numero2 << " is " 
  << MaximoComunDivisor(numero1, numero2) << "." << std::endl;
}