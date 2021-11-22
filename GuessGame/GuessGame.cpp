#include <iostream>
#include <string>

int main()
{
    srand(time(NULL));
    int Next_Level = 1000;
    int NumberGuess = rand() % 1001;
    std::string PlayerGuess;
    int Attempts = 0;
    bool KeepPlaying = true;

    while (KeepPlaying) {

        std::cout << "Guess the number between 1 and 1000\n" << std::endl;
        std::cin >> PlayerGuess;
        Attempts++;

        int PlayerNumber = std::stoi(PlayerGuess);

        if (PlayerNumber == NumberGuess) {
            std::cout << "Congrats! You got it!\n" << std::endl;
            std::cout << "Total of guesses: " << Attempts << std::endl;
            std::cout << "\tWould you like to play again? [y/n]" << std::endl;
            std::string choice;
            std::cin >> choice;
            if (choice == "y") {
                NumberGuess = rand() % 101 + Next_Level++;
                Attempts = 0;
            }
            else if (choice == "n") {
                std::cout << "Thanks for playing!"<<std::endl;
                KeepPlaying = false;
            }
            else {
                exit(0);
            }
        }
        else if (PlayerNumber > NumberGuess) {
            std::cout << "A little bit lower" << std::endl;
            std::cout << "Number of guesses so far "<< Attempts << std::endl;

        }
        else if (PlayerNumber < NumberGuess) {
            std::cout << "A little bit higher" << std::endl;
            std::cout << "Number of guesses so far " << Attempts << std::endl;
        }

    }
}