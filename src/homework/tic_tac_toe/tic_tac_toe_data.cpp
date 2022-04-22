//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games) {
    // Declare and open file
    ofstream write_file;
    write_file.open(file_name);

    if (write_file.is_open()) {
        // Loop through vector of TicTacToe pointers
        for (auto &game: games) {
            for (auto &peg: game->get_pegs()) { // For each character in string
                write_file << peg; // Write character to file
            }
            write_file << game->get_winner(); // Write winner to file
            write_file << "\n"; // Print new line
        }
    }
    // Close file
    write_file.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games() {
    // Create vector
    std::vector<std::unique_ptr<TicTacToe>> boards;
    // Open File
    ifstream read_file;
    read_file.open(file_name);

    std::string line;

    if (read_file.is_open()) {
        while (std::getline(read_file, line)) {
            std::vector<std::string> pegs;
            for (auto i = 0; i < (line.length()-1); i++) {
                std::string ch(1, line[i]);
                pegs.push_back(ch);
            }
            std::string winner{line[line.size()-1]};
            // pegs.push_back(winner);
            std::unique_ptr<TicTacToe> board;
            if (pegs.size() == 9) {
                board = std::make_unique<TicTacToe3>(pegs, winner);
            } else {
                board = std::make_unique<TicTacToe4>(pegs, winner);
            }

            boards.push_back(std::move(board));
        }
        read_file.close();
    }

    return boards;
}