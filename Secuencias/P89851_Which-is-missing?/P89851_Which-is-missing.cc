/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 30 2022
  * @brief program that reads sequences with all the numbers between 1 and n
  * but one, and tells which one is missing.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P89851_en
  */

#include <iostream>
#include <vector>

/** Funcion que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Este programa lee una secuencia con todos los numeros entre"
  << " n y n menos 1 y dice cual falta"; 
  std::cout <<  std::endl;
  std::cout <<  "Ingrese un numero entero y su sucecion desde 1 a dicho"
  << "  numero a exepción de uno de ellos."; 
  std::cout << std::endl;
}

/** Funcion que lee una secuencia de numeros y la introduce dentro de un vector
  * 
  * @param[in] size: Cantidad de numeros que hay en la secuencia
  * @return vector de size componentes introducidas por el usuario
  */
std::vector<int> SecuenciaDeNumeros(const int size) {
  std::vector<int> vector;
  vector.reserve(size);
  for(int i{0}; i < size; ++i) {
    int element;
    std::cin >> element;
    vector.emplace_back(element);
  }
  return vector;
}

/** Funcion que imprime el valor del sumatorio de n segun, es
  * decir la suma de los numeros desde 1 hasta n para un n entero
  * 
  * @param[in] numero: es el numero n hasta el cual llega el sumatorio
  * @return devuleve la suma de los numeros de n hasta 1
  */
int Sumatorio_grado_1(const int numero) {
  int sumatorio{0};
  sumatorio = (numero * (numero + 1)) / 2;
  return sumatorio;
}

/** Funcion que imprime la suma de una secuencia de numeros alojados en 
  * un vector
  *
  * @param[in] vector: Vector con una secuencia de numeros 
  * @return resultado de la suma de la secuencia de numeros
  */
int SumaDeLaSecuencia(const std::vector<int>& vector) {
  int suma_de_la_secuencia{0};
  int numero_que_falta{0};
  for(auto& element : vector) {
    suma_de_la_secuencia += element;
  }
  return suma_de_la_secuencia;
}

/** Main function
  * 
  */
int main() {
  // Introduccion();
  int numero_n{0};
  while(std::cin >> numero_n) {
  std::cout << Sumatorio_grado_1(numero_n) -
  SumaDeLaSecuencia(SecuenciaDeNumeros(numero_n - 1)) << std::endl;
  }
}
