/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Jan 30 2023
  * @brief Programa que lee 2 números e imprime su máximo
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P90615_en/submissions/S002
  */  
#include<iostream>

int main() {
	//std::cout << "Este programa lee 2 números e imprime su máximo";
	//std::cout << std::endl << "Escriba 2 números: ";
	int numero1, numero2;
	std::cin >> numero1 >> numero2;
	if (numero1 < numero2) {
		std::cout << numero2  << std::endl;
	} else {
		std::cout << numero1 << std::endl;
	}
}