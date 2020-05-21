#pragma once

#include "Soldier.hpp"
namespace WarGame {
  class ParamedicCommander: public Soldier{
public:
  ParamedicCommander(uint t);
  virtual void attack(Board* board, int row, int column);

};
}
