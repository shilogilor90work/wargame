#pragma once
#include "Soldier.hpp"

namespace WarGame {
  class Sniper: public Soldier{
public:
  Sniper(uint t);
  virtual void attack(Board* board, int row, int column);
  virtual void FootCommanderSaysShoot(Board* board, int row, int column){attack(board, row, column);};

};
}
