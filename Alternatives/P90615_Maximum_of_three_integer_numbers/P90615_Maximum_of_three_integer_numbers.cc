/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P90615_Maximum-of-three-integer-numbers.cc
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 06 2022
  * @brief programa que lee 3 números e imprime su máximo
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P90615_en
	* @see https://github.com/IB-2022-2023/P06-alternatives-iterations/blob/main/alternatives-and-iterations.md 
  */  
#include<iostream>

int main() {
	//std::cout << "Este programa lee 3 números e imprime su máximo";
	//std::cout << std::endl << "Escriba 3 números: ";
	int numero1, numero2, numero3;
	std::cin >> numero1 >> numero2 >> numero3;
	if (numero1 <= numero2 and numero3 <= numero2) {
		std::cout << numero2  << std::endl;
	}
	else if (numero1 <= numero3 and numero2 <= numero3) {
		std::cout << numero3 << std::endl;
	}
	else if (numero2 <= numero1 and numero3 <= numero1){
			std::cout << numero1 << std::endl;
	}
	else {
		std::cout << numero1 << std::endl;
 }
}