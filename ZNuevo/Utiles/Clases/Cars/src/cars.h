/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @author Himar Edhey Hernández Alonso alu0101552392@ull.edu.es
 * @date Jun 16 2023
 * @brief Declaración de los métodos de la clase Cars
 * @bug No hay errores conocidos
 * @see
 */

#ifndef CARS_H
#define CARS_H

#include <iostream>
#include <vector>

class Cars {
public:
  Cars(std::string tipo = "Predeterminado", std::string marca = "Blanca",
       std::string modelo = "ModeloPredeterminado", double precio = 0)
      : tipo_(tipo), marca_(marca), modelo_(modelo), precio_(precio) {}
  ~Cars();
  std::string GetTipo() const;
  std::string GetMarca() const;
  std::string GetModelo() const;
  double GetPrecio() const;
  friend std::ostream& operator<<(std::ostream& out, const Cars& coche);
  friend std::istream& operator>>(std::istream& in, Cars& coche);
  // double MayorPrecio();
private:
  std::string tipo_;
  std::string marca_;
  std::string modelo_;
  double precio_;
  // enum class TiposDeCoche {
  //   Todoterreno,
  //   Berlina,
  //   Coupe,
  //   Utilitario,
  //   Monovolumen,
  //   Deportivo,
  //   Roadster,
  // };
};

std::vector<Cars> InstanciaCoches(int coches_a_instanciar);
void ImprimeVectorCoches(const std::vector<Cars>& vector_de_coches);

#endif
