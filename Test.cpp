
#include "doctest.h"

#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Paramedic.hpp"
#include "ParamedicCommander.hpp"
#include "Sniper.hpp"
#include "SniperCommander.hpp"
#include "Board.hpp"

namespace WarGame {

TEST_CASE("check board") {
  CHECK_NOTHROW(Board board(8,8));
}

TEST_CASE("check FootSoldier") {
  Board board(8,8);
  try {
    board[{0,1}] = new FootSoldier(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,0}] = new FootSoldier(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new FootSoldier(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,1}] = new FootSoldier(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,1}] = new FootSoldier(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,7}] = new FootSoldier(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new FootSoldier(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}
TEST_CASE("check FootCommander") {
  Board board(8,8);
  try {
    board[{0,1}] = new FootCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,0}] = new FootCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new FootCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,1}] = new FootCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,1}] = new FootCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,7}] = new FootCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new FootCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}

TEST_CASE("check Sniper") {
  Board board(8,8);
  try {
    board[{0,1}] = new Sniper(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,0}] = new Sniper(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new Sniper(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,1}] = new Sniper(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,1}] = new Sniper(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,7}] = new Sniper(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new Sniper(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}

TEST_CASE("check SniperCommander") {
  Board board(8,8);
  try {
    board[{0,1}] = new SniperCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,0}] = new SniperCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new SniperCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,1}] = new SniperCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,1}] = new SniperCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,7}] = new SniperCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new SniperCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}


TEST_CASE("check Paramedic") {
  Board board(8,8);
  try {
    board[{0,1}] = new Paramedic(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,0}] = new Paramedic(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new Paramedic(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,1}] = new Paramedic(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,1}] = new Paramedic(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,7}] = new Paramedic(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new Paramedic(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}


TEST_CASE("check ParamedicCommander") {
  Board board(8,8);
  try {
    board[{0,1}] = new ParamedicCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,0}] = new ParamedicCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new ParamedicCommander(1);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,1}] = new ParamedicCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,1}] = new ParamedicCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{0,7}] = new ParamedicCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
  try {
    board[{7,7}] = new ParamedicCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}
TEST_CASE("check all") {
  try {
    Board board(8,8);
    board[{0,7}] = new ParamedicCommander(2);
    board[{2,1}] = new FootSoldier(1);
    board[{3,0}] = new Paramedic(1);
    board[{4,1}] = new Sniper(2);
    board[{5,1}] = new FootCommander(2);
    board[{6,1}] = new SniperCommander(2);
    CHECK(true);
  } catch(std::exception e)
  {
    CHECK(false);
  }
}
TEST_CASE("check move") {
    Board board(8,8);
    board[{0,1}] = new ParamedicCommander(1);
    board[{0,2}] = new FootSoldier(1);
    board[{0,3}] = new Paramedic(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new ParamedicCommander(2);
    board[{7,1}] = new FootSoldier(2);
    board[{7,2}] = new Paramedic(2);
    board[{7,3}] = new Sniper(2);
    board[{7,4}] = new FootCommander(2);
    board[{6,5}] = new SniperCommander(2);
    CHECK_NOTHROW(board.move(1, {0,1}, Board::MoveDIR::Up));
    CHECK_NOTHROW(board.move(1, {0,2}, Board::MoveDIR::Up));
    CHECK_NOTHROW(board.move(1, {0,3}, Board::MoveDIR::Up));
    CHECK_NOTHROW(board.move(1, {0,4}, Board::MoveDIR::Up));
    CHECK_NOTHROW(board.move(1, {0,5}, Board::MoveDIR::Up));
    CHECK_NOTHROW(board.move(1, {0,6}, Board::MoveDIR::Up));
}
TEST_CASE("check move") {
    Board board(8,8);
    board[{0,1}] = new ParamedicCommander(1);
    board[{0,2}] = new FootSoldier(1);
    board[{0,3}] = new Paramedic(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new ParamedicCommander(2);
    board[{7,1}] = new FootSoldier(2);
    board[{7,2}] = new Paramedic(2);
    board[{7,3}] = new Sniper(2);
    board[{7,4}] = new FootCommander(2);
    board[{6,5}] = new SniperCommander(2);
    CHECK_NOTHROW(board.move(2, {7,1}, Board::MoveDIR::Down));
    CHECK_NOTHROW(board.move(2, {7,2}, Board::MoveDIR::Down));
    CHECK_NOTHROW(board.move(2, {7,3}, Board::MoveDIR::Down));
    CHECK_NOTHROW(board.move(2, {7,4}, Board::MoveDIR::Down));
    CHECK_NOTHROW(board.move(2, {6,5}, Board::MoveDIR::Down));
    CHECK_NOTHROW(board.move(2, {7,0}, Board::MoveDIR::Down));
}
TEST_CASE("check FootSoldier die") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new FootSoldier(2);
    CHECK(board[{7,0}] != nullptr);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(board[{7,0}] == nullptr);
}
TEST_CASE("check Sniper die") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Sniper(2);
    CHECK(board[{7,0}] != nullptr);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(board[{7,0}] == nullptr);
}
TEST_CASE("check FootCommander die") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new FootCommander(2);
    CHECK(board[{7,0}] != nullptr);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(board[{7,0}] == nullptr);
}
TEST_CASE("check SniperCommander die") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new SniperCommander(2);
    CHECK(board[{7,0}] != nullptr);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(board[{7,0}] == nullptr);
}
TEST_CASE("check ParamedicCommander die") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new ParamedicCommander(2);
    CHECK(board[{7,0}] != nullptr);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(board[{7,0}] == nullptr);
}
TEST_CASE("check Paramedic die") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);
    CHECK(board[{7,0}] != nullptr);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(board[{7,0}] == nullptr);
}
TEST_CASE("check has_soldiers") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);
    CHECK(board.has_soldiers(2));
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(!board.has_soldiers(2));
}

TEST_CASE("check has_soldiers with dying") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);
    board[{6,0}] = new Paramedic(2);

    CHECK(board.has_soldiers(2));
    board.move(1, {0,2}, Board::MoveDIR::Up);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    CHECK(board.has_soldiers(2));
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(!board.has_soldiers(2));
}

TEST_CASE("check health") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);

    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    CHECK(board[{7,0}]->health == 90);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    CHECK(board[{7,0}]->health == 40);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    CHECK(board[{7,0}]->health == 10);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(!board.has_soldiers(2));
}
TEST_CASE("check health 2") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);
    board[{2,0}] = new Paramedic(2);

    CHECK(board[{2,0}]->health == 100);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    CHECK(board[{2,0}]->health == 90);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    CHECK(board[{2,0}]->health == 90);
    CHECK(board[{7,0}]->health == 50);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    CHECK(board[{2,0}]->health == 60);
    CHECK(board[{7,0}]->health == 50);
    board.move(1, {0,6}, Board::MoveDIR::Up);
    CHECK(!board.has_soldiers(2));
}
TEST_CASE("check health 3") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);
    board[{7,2}] = new Paramedic(2);

    CHECK(board[{7,2}]->health == 100);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    CHECK(board[{7,2}]->health == 90);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    CHECK(board[{7,2}]->health == 40);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    CHECK(board[{7,2}]->health == 10);
    CHECK(board[{7,0}]->health == 100);
    board.move(2, {7,0}, Board::MoveDIR::Right);
    CHECK(board[{7,2}]->health == 100);
    board.move(1, {0,6}, Board::MoveDIR::Up);
}

TEST_CASE("check health 4") {
    Board board(8,8);
    board[{0,2}] = new FootSoldier(1);
    board[{0,4}] = new Sniper(1);
    board[{0,5}] = new FootCommander(1);
    board[{0,6}] = new SniperCommander(1);
    board[{7,0}] = new Paramedic(2);
    board[{7,2}] = new FootSoldier(2);

    CHECK(board[{7,2}]->health == 100);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,2}, Board::MoveDIR::Up);
    CHECK(board[{7,2}]->health == 90);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,4}, Board::MoveDIR::Up);
    CHECK(board[{7,2}]->health == 40);
    CHECK(board[{7,0}]->health == 100);
    board.move(1, {0,5}, Board::MoveDIR::Up);
    CHECK(board[{7,2}]->health == 10);
    CHECK(board[{7,0}]->health == 100);
    board.move(2, {7,0}, Board::MoveDIR::Right);
    CHECK(board[{7,2}]->health == 100);
    board.move(1, {0,6}, Board::MoveDIR::Up);
}

}
