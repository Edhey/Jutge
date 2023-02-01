/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @date 1 Dic 2022
 * @author Himar Edhey Hernández Alonso
 * @brief Programa que lee una secuencia de caracteres, cada uno codificando un 
 * movimiento ('n' para el norte, 's' para el sur, 'e' para el este y 'w' para 
 * el oeste), y que calcula la posición final de un objeto ubicado inicialmente 
 * en (0, 0). El primer componente corresponde a la dirección este-oeste, ir al 
 * este significa agregar 1 a ese componente y que ir al sur significa agregar 1
 * al segundo componente.
 * @see https://github.com/IB-2022-2023/P11-Intro-oop/blob/main/intro-oop.md
 * @see https://jutge.org/problems/P79784
 */
  
#include <utility>
#include <string>
#include <iostream>

enum class Bearing {
  NORTH, 
  EAST, 
  SOUTH,
  WEST
};

using Position = std::pair<int, int>;

class Robot{
 public:    
  Robot();
  Robot(Position position, Bearing bearing);
  Position GetPosition() const;
  Bearing GetBearing() const;
  void Avance();
  void OrientacionNorte();
  void OrientacionSur();
  void OrientacionEste();
  void OrientacionOeste();
  void ExecuteSequence(const char& sequence);
 private:
  Position position_;
  Bearing bearing_;
};

/**
 * @brief Constructor por defecto.
 * @return Objeto de la clase Robot.
 */
Robot::Robot() {
  position_ = {0, 0};
  bearing_ = Bearing::NORTH;
}

/**
 * @brief Constructor por parámetros.
 * @return Objeto de la clase Robot.
 */
Robot::Robot(std::pair<int, int> position, Bearing bearing) {
  position_ = position;
  bearing_ = bearing;
}

/**
 * @brief getter para el parámetro position_.
 * @return parámetro position_.
 */
Position Robot::GetPosition() const {
  return position_;
}

/**
 *  @brief getter para el parámetro bearing_.
 * @return parámetro bearing_.
 */
Bearing Robot::GetBearing() const {
  return bearing_;
}

/**
 * @brief Método de la clase Robot que mueve las coordenadas dependeiendo de 
 * donde o.
 */
void Robot::Avance() {
  switch (bearing_) {
    case Bearing::SOUTH: 
      ++position_.second; 
      break;
    case Bearing::NORTH: 
      --position_.second; 
      break;
    case Bearing::EAST: 
      ++position_.first; 
      break;
    case Bearing::WEST: 
      --position_.first; 
      break;
  }
}

/** @brief Método de la clase Robot que ajusta la orientación hacia el norte.
  */
void Robot::OrientacionNorte() {
  bearing_ = Bearing::NORTH;
  Avance();
}

/** @brief Método de la clase Robot que ajusta la orientación hacia el sur.
  */
void Robot::OrientacionSur() {
  bearing_ = Bearing::SOUTH;
  Avance();
}

/** @brief Método de la clase Robot que ajusta la orientación hacia el este.
  */
void Robot::OrientacionEste() {
  bearing_ = Bearing::EAST;
  Avance();
}

/** @brief Método de la clase Robot que ajusta la orientación hacia el oeste.
  */
void Robot::OrientacionOeste() {
  bearing_ = Bearing::WEST;
  Avance();
}

/** 
 * @brief Método de la clase Robot que ejecuta una secuencia pasada como string.
 * @param sequence Secuencia a ejecutar pasada como string.
 */
void Robot::ExecuteSequence(const char& sequence) {
  switch (sequence) {
    case 'n':
      OrientacionNorte();
      break;
    case 's':
      OrientacionSur();
      break;
    case 'e':
      OrientacionEste();
      break;
    case 'w':
      OrientacionOeste();
      break;
  }
}

/**
 * @brief Robot Client main function 
 */
int main() {
  const std::pair<int, int> kPosition{0, 0};
  const Bearing kBearing {Bearing::NORTH};
  Robot robot{kPosition, kBearing};
  std::string sequence;
  getline(std::cin, sequence);
  for (const auto& movement : sequence) {
    robot.ExecuteSequence(movement);
  }
  std::pair<int, int> final_position = robot.GetPosition();
  std::cout << "(" << final_position.first << ", " << final_position.second  << ")" << std::endl;
  return 0;
}