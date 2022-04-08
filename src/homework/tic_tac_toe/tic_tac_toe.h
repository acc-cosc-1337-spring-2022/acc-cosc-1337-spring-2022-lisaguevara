#include <string>
#include <vector>
#include <iostream>

//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe {
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

    public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const {return player;};
    // void display_board() const;
    std::string get_winner() {return winner;}; // Needs function block in cpp

    private:
    std::string player;
    std::vector<std::string> pegs{9, " "};
    std::string winner;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win(); // Needs function block in cpp
    bool check_row_win(); // Needs function block in cpp
    bool check_diagonal_win(); // Needs function block in cpp
    void set_winner(); // Needs function block in cpp
};
#endif