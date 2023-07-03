#include <iostream>
#include <random>
#include <ctime>

int main()
{
  unsigned seed = std::time(0); // To generate random number for every run of the program
  std::cout << std::endl;
  std::cout << "Guess the Number!" << std::endl; // Game Name
  std::cout << std::endl;

  std::mt19937 gen(seed);
  std::uniform_int_distribution<int> dis(1, 100); // creates a random number between 1 and 6
  int guessno = dis(gen);
  int userinput;

  std::cout << "Enter Your Guess: "; // User enters his/her guess
  std::cin >> userinput;
  int count = 0;

  if (guessno == userinput)
  {
    std::cout << "Congrats u found it in first attempt" << std::endl;
  }
  else
  {
    if (guessno > userinput)
    {
      std::cout << "The number you guessed is less" << std::endl;
      std::cout << std::endl;
    }
    else if (guessno < userinput)
    {
      std::cout << "The number you guessed is more" << std::endl;
      std::cout << std::endl;
    }
    count++;
    while (guessno != userinput)
    {
      std::cout << "Enter your Guess: ";
      std::cin >> userinput;

      if (guessno > userinput)
      {
        std::cout << "The number you guessed is less" << std::endl;
        std::cout << std::endl;
        count++;
      }
      else if (guessno < userinput)
      {
        std::cout << "The number you guessed is more" << std::endl;
        std::cout << std::endl;
        count++;
      }
    }

    std::cout << "congrats you found the number after " << count << " attempts" << std::endl; // output is displayed
  }
  return (0);
}