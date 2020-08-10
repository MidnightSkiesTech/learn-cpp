// Rock, paper, scissors, lizard, Spock... eventually

#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));

int computer = rand() % 3 + 1;

int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";

std::cin >> user;

if (user == 1 && computer == 2) {

  std::cout << "Paper covers rock!\n";
  std::cout << "Computer wins!\n";

}
else if (user == 1 && computer == 3) {

  std::cout << "Rock smashes scissors!\n";
  std::cout << "Player wins!\n";

}
else if (user == 2 && computer == 1) {

  std::cout << "Paper covers rock!\n";
  std::cout << "Player wins!\n";

}
else if (user == 2 && computer == 3) {

  std::cout << "Scissors cuts paper!\n";
  std::cout << "Computer wins!\n";

}
else if (user == 3 && computer == 1) {

  std::cout << "Rock smashes scissors!\n";
  std::cout << "Computer wins!\n";

}
else if (user == 3 && computer == 2) {

  std::cout << "Scissors cuts paper!\n";
  std::cout << "User wins!\n";

}
else if (user == computer) {

  std::cout << "Tie game!\n";

}
else {

  std::cout << "Invalid input.\n";

}

return 0;

}

// Need to add logic for lizard and Spock options
