#include "Game.h"
#include "PlayerGoku.h"
#include "PlayerLuffy.h"
#include "PlayerNaruto.h"
using namespace std;
void Game::Instructions() {
  std::cout << "Choose your character:\n" << endl;
  cout << "Press 1 for player Naruto" << endl;
  cout << "Press 2 for player Goku" << endl;
  cout << "Press 3 for player Luffy" << endl;
}
void Game::Run() {
  gameStory();
  char userInput;

  do {
    cout << "\nPress S to start the game or any other key to exit: ";
    cin >> userInput;
    if (userInput == 'S' || userInput == 's') {
      Instructions();
      InitPlayer();
      GameLoop(player1, player2);

    } else {
      cout << "Thanks for playing the game" << endl;
    }

  } while (userInput == 'S' || userInput == 's');
}