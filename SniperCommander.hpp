#pragma once

#include "Soldier.hpp"
namespace WarGame {
  class SniperCommander: public Soldier{
public:
  SniperCommander(uint t);
  virtual void attack(Board* board, int row, int column);
};
}
