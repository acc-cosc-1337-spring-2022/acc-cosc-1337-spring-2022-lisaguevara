#include "tic_tac_toe.h"

using std::string, std::cout, std::cin;
int main() 
{
	TicTacToe game;
	string first_player;
	char choice;
	int position;

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
		cout << "Enter position [1-9]: ";
		cin >> position;
		game.mark_board(position);
		game.display_board();
	}
	cout << "\nThe winner is " << game.get_winner() << "!\n\n";
	cout << "Continue? Type y: ";
	cin >> choice;
	} while (choice == 'Y'|| choice == 'y');


	return 0;
}