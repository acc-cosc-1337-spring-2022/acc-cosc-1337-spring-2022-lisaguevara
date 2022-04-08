#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::string, std::cout, std::cin;
int main() 
{
	// Create TicTacToe instance
	TicTacToe game;
	// Create TicTacToeManager instance
	TicTacToeManager manager;

	// Create variables
	string first_player;
	char choice; // Continue game choice
	int o, w, t; // X, O, and tie totals

	do {
	cout << "Enter first player (X or O): ";
	cin >> first_player;
	// Validate for correct input
	while (first_player != "X" && first_player != "O") {
        cout << "Invalid entry!\n";
        cout << "Entry must be an X or O. \n\n";
		cout << "Enter first player (X or O): ";
        cin >> first_player;
    }
	game.start_game(first_player);

	while (game.game_over() == false) {
		cin >> game;
		cout << game;
	}
	// Display winner of game
	cout << "\nThe winner is " << game.get_winner() << "!\n\n";

	// Add wins to TicTacToe Manager
	manager.save_game(game);

	// Display running scores to the user
	manager.get_winner_total(o, w, t);

	// Ask user if they want to play another game
	cout << "Continue? Type y: ";
	cin >> choice;
	cout << "\n";

	} while (choice == 'Y'|| choice == 'y');

	// Display all games played
	cout << manager;

	return 0;
}