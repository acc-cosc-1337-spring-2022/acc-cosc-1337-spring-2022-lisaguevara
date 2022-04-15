//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::string, std::cout;

// Friend methods
std::ostream& operator<<(std::ostream& out, const TicTacToe& game){
    if (game.pegs.size() == 9) {
        for(int i = 0; i < 9; i+=3) {
            out << game.pegs[i] << "|" << game.pegs[i +1] << "|" << game.pegs[i+2] << "\n";
        }
    } else {
        for(int i = 0; i < 16; i+=4) {
            out << game.pegs[i] << "|" << game.pegs[i +1] << "|" << game.pegs[i+2] << "|" << game.pegs[i+3] << "\n";
        }
    }
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game) {
    int position;
    if (game.pegs.size() == 9) {
        cout << "Enter position [1-9]: ";
	    in >> position;
    } else {
        cout << "Enter position [1-16]: ";
	    in >> position;
    }
    game.mark_board(position);
    return in;
}
// Public methods

void TicTacToe::start_game(string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
}

bool TicTacToe::game_over() {
    /* update class function to determine a win by checking for row win or 
    column win or diagonal win. (use conditional structure), 
    if winner call the set winner function and return true
    check board full equal true indicates a tie 
    If no winner by row, column, or diagonal set winner variable to C and return true.
    return false-if no winner n board not full
    */

    bool over;
    if (check_diagonal_win() == true || check_row_win() == true || check_column_win() == true) {
        set_winner();
        over = true;
    } else if (check_board_full() == true) {
        over = true;
        winner = "C";
    } else {
        over = false;
    }
    return over;
}

// Private methods

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    } else { 
        player = "X";
    }
}

bool TicTacToe::check_board_full() {
    for (auto peg: pegs) {
        if (peg == " " ) {
            return false;
        }
    }
    return true;
}
void TicTacToe::clear_board() {
    if (pegs.size() == 9) {
        for (int i = 0; i < 9; i++) {
        pegs[i] = " ";
        }
    } else {
        for (int i = 0; i < 16; i++) {
        pegs[i] = " ";
        }
    }
}

bool TicTacToe::check_column_win() {
    return false;
}

bool TicTacToe::check_row_win() {
    return false;
}
bool TicTacToe::check_diagonal_win() {
    return false;
}

void TicTacToe::set_winner() {
    /* If player is X set winner to O otherwise set winner to X 
    */
   if (player == "X") {
       winner = "O";
   } else {
       winner = "X";
   }
}