/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Dec 1 2022
  * @brief programa que que cuenta e imprime la cantidad de numeros de una secuencia y la
  * suma de todos ellos
  * @bug No hay errores conocidos
  * @see (enlace) 
  */

#include <iostream>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << ""; 
  std::cout <<  std::endl;
  std::cout <<  ""; 
  std::cout << std::endl;
}

/** Funcion que cuenta e imprime la cantidad de numeros de una secuencia y la
  * suma de todos ellos
  * 
  * @param[in] num: parametro pasado por referencia que almacena la cantidad de
  * numeros en una secuencia
  * @param[in] sum: parametro pasado por referencia que almacena la suma de los
  * numeros de una secuencia
  * @return
  */
void count_and_add(int& num, int& sum) {
  int integer;
  num = 0;
  sum = 0;
  while(std::cin >> integer) {
    ++num;
    sum += integer;
  }
}

int main() {
  int num = -1;
  int sum = -33;
  count_and_add(num, sum);
//  std::cout << count_and_add(num, sum) << std::endl;
}
