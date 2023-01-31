/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 31 2023
  * @brief Programa que lea dos números x e y, e imprima todos los números entre
  * x e y (o entre y y x), en orden decreciente.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P59875_en
  */  
 
#include<iostream>

/** Función que imprime la introduccion del programa
  *
  * @return Texto con el resumen de la utilidad del programa y como ejecutarlo
  */
void Introduccion() {
  std::cout << "Programa que lea dos números x e y, e imprima todos los números" 
  << "entre x e y (o entre y y x), en orden decreciente.";
  std::cout <<  std::endl;
  std::cout <<  "Escriba dos números: "; 
  std::cout << std::endl;
}

/** Función que devuelve el mayor de dos números dados como parámetros
  * 
  * @param numero1 uno de los dos números.
  * @param numero2 uno de los dos números.
  * @return el mayor de los dos números pasados por referencia.
  */
int NumeroMayor(const int numero1, const int numero2) {
  if (numero1 > numero2) {
    return numero1;
  } else {
    return numero2;
  }
}

/** Función que imprime la sucesion decreciente correspendiente a dos numeros
  * pasados como parámetros. 
  * 
  * @param numero1 uno de los dos números de la sucesion.
  * @param numero2 uno de los dos números de la sucesion.
  */
void SucesionDecreciente(int numero1, int numero2) {
  int numero_mayor{NumeroMayor(numero1, numero2)};
  if (numero_mayor == numero1) {
    while (numero1 >= numero2) {
      std::cout << numero1 << std::endl;
      --numero1;
    }
  } else {
    while (numero1 <= numero2) {
      std::cout << numero2 << std::endl;
      --numero2;
    }
  }
}

/** @brief Función main.
  */
int main() {
  int numero1{}, numero2{};
  // Introduccion();
  std::cin >> numero1 >> numero2;
  SucesionDecreciente(numero1, numero2);
}