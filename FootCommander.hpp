#pragma once

#include "Soldier.hpp"
namespace WarGame {
  class FootCommander: public Soldier{
public:
  FootCommander(uint t);
  virtual void attack(Board* board, int row, int column);

};
}
