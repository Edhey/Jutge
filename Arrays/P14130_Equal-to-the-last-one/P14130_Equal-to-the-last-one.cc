/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
  * @date Nov 26 2022
  * @brief programa que
  * @bug No hay errores conocidos
  * @see https://github.com/IB-2022-2023/P09-string-array-vector/blob/main/string-array-vector.md
  */

#include <iostream>
#include <vector>

/** Function that creates a vector with param(size) number of components
  * 
  * @param[in] size: it set the number of component of the vector 
  * @return a vector whit size components
  */
std::vector<double> GenerateVector(const int size) {
  std::vector<double> vector;
  vector.reserve(size);
  double component;
  for (int i{0}; i < size; ++i) {
    std::cin >> component;
    vector.emplace_back(component);
  }
  return vector;
}

/** Function that compares the elemnts in a vector with the last one component
  * in it
  *  
  * @param[in] vector: It requires a vector with any components
  * @return It returns a int with the number of elements that are equals to the
  * last element in the vector
  */
int ElementsEqualToTheLastOneComponentInAVector(std::vector<double> vector) {
  double equal_component{0};
  for(auto& value : vector) {
    if(value == vector.back()) {
      equal_component++;
    }
  }
  return equal_component;
}

/** Main function
  */
int main(){
  int size_vector;
  std::cin >> size_vector;
  std::cout <<
  ElementsEqualToTheLastOneComponentInAVector(GenerateVector(size_vector)) - 1
// The program requires that the last element in the vector is not included in
// the count
  << std::endl;
}

