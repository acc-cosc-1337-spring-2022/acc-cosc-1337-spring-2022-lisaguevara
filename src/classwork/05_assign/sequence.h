#include <string>

// Function signature for get_gc_content
double get_gc_content(const std::string dna);

// Function signature for get_dna_complement
std::string get_dna_complement(std::string dna);

// Function signature for reverse_string
std::string reverse_string(std::string dna);

// Function signature for run_dna_menu
void run_dna_menu();

// Function signature for display_menu
void display_menu();

// Function signature for handle_menu_choice
void handle_menu_choice(int choice);

// Function signature for get_dna_string
std::string get_dna_string();

// Function signature for validate_dna_string
bool validate_dna_string(std::string dna);

/* Overloaded function signature for display_contents
 * that takes one double and one string parameter. 
 */
void display_contents(double contents, std::string dna);

/* Overloaded function signature for display_contents
 * that takes two string parameters. 
 */
void display_contents(std::string contents, std::string dna);