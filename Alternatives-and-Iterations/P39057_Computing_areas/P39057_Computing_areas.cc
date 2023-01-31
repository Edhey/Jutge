/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P39057_Computing-areas.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 06 2022
  * @brief programa que lee varias descripciones de rectángulos y círculos y
  * para cada uno imprime su area correspondiente.
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P39057_en
  * @see https://github.com/IB-2022-2023/P06-alternatives-iterations/blob/main/alternatives-and-iterations.md 
  */

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

int main() {
  //std::cout << "Este programa lee varias descripciones de rectángulos";
  //std::cout << "y circulos y para cada uno imprime su area correspondiente.";
  //std::cout << std::endl << "Insere dos numeros " << std::endl;
  int figuras;
  std::string nombre_figura = " ";
	std::string circle = "circle";
	std::string rectangle = "rectangle";
  double anchura_rectangulo, altura_rectangulo, radio_circulo;
  const double pi = atan(1)*4;
  std::cin >> figuras;
	for(figuras = figuras; figuras > 0; figuras--) {
	std::cin >> nombre_figura;
	  if(nombre_figura == rectangle) {
    std::cin >> anchura_rectangulo >> altura_rectangulo;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << anchura_rectangulo * altura_rectangulo;
    std::cout << std::endl;
	  } else if(nombre_figura ==circle) {
      std::cin >> radio_circulo;
      std::cout << std::fixed << std::setprecision(6); 
      std::cout << pi * radio_circulo * radio_circulo;
      std::cout << std::endl;
    } else {
      return 0;
    }
  }
}