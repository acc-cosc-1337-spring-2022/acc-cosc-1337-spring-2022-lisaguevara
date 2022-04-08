//cpp
#include "tic_tac_toe_manager.h"

using std::cout;

// Friend methods
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager){
    out << "*- All Games Played -*\n";
    for (auto game: manager.games) {
        out << game << "\n";
    }
    return out;
}

// Public methods
void TicTacToeManager::save_game(TicTacToe b) {
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t){
    w = x_win;
    o = o_win;
    t = ties;
    cout << "O wins: " << o << "\n";
    cout << "X wins: " << w << "\n";
    cout << "Ties: " << t << "\n";
}

// Private methods
void TicTacToeManager::update_winner_count(std::string winner){
    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else {
        ties++;
    }
}