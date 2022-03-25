#include "sequence.h"
#include <iostream>
#include <iomanip>

// Function block for get_gc_content
double get_gc_content(const std::string dna) {
    double sum = 0;
    double gc_sum = 0;
    for (char ch:dna){
        sum++;
        if (ch == 'G' || ch == 'C'){
            gc_sum++;
        }
    }
    return gc_sum / sum;
}

// Function block for reverse_string
std::string reverse_string(std::string dna) {
    std::string temp_st;
    for (int i = dna.length()-1; i >= 0; i--) {
        temp_st += dna[i];
    }
    return temp_st;
}

// Function block for get_dna_complement
std::string get_dna_complement(std::string dna) {
    dna = reverse_string(dna);
    for (int i = dna.length()-1; i >= 0; i--) {
        switch (dna[i]) {
            case 'A':
                dna[i] = 'T';
                break;
            case 'T':
                dna[i] = 'A';
                break;
            case 'C':
                dna[i] = 'G';
                break;
            case 'G':
                dna[i] = 'C';
                break;
        }
    }
    return dna;
}

// Function block for run_dna_menu
void run_dna_menu(){
    int choice;
    do {
        // Display menu
        display_menu();
        // Ask for user input
        std::cout << "Enter a menu option number: ";
        std::cin >> choice;
        std::cout << "\n"; // print a blank line
        // Handle menu choice
        handle_menu_choice(choice);
    } while (choice != 3);
}

// display_menu function block
void display_menu() {
    std::cout << "\n\tMain Menu\t\n";
    std::cout << "1 - Get GC Content\n";
    std::cout << "2 - Get DNA Complement\n";
    std::cout << "3 - Exit\n\n";
}

// handle_menu_choice function block
void handle_menu_choice(int choice) {
    std::string dna;
    double gc_content;
    std::string dna_complement;

    switch (choice) {
        case 1:
            dna = get_dna_string();
            gc_content= get_gc_content(dna);
            display_contents(gc_content, dna);
            break;
        case 2:
            dna = get_dna_string();
            dna_complement = get_dna_complement(dna);
            display_contents(dna_complement, dna);
            break;
        case 3:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid Entry\n";
    }
}

// get_dna_string function block
std::string get_dna_string(){
    std::string dna_st;
    std::cout << "Enter a DNA string: ";
    std::cin >> dna_st;
    // validation
    bool invalid = validate_dna_string(dna_st);
    while (invalid) {
        std::cout << "Invalid DNA string. Must contain case-sensitive characters A, T, C, or G. \n\n";
        std::cout << "Enter a DNA string: ";
        std::cin >> dna_st;
        invalid = validate_dna_string(dna_st);
    }
    return dna_st;
}

// validate_dna_string function block
bool validate_dna_string(std::string dna) {
    bool invalid = false;
    for(int i = 0; i < dna.length(); i++){
        if (dna[i] != 'A' && dna[i] != 'T' &&
            dna[i] != 'C' && dna[i] != 'G') {
            invalid = true;        
        }
    }
    return invalid;
}

/* Overloaded function block for display_contents which takes
 * a double and string argument
 */
void display_contents(double contents, std::string dna){
    std::cout << "The GC Content of " << dna << " is: " << std::setprecision(3) << (contents *100) << "%" << "\n";
}

/* Overloaded function block for display_contents which takes
 * two string arguments
 */
void display_contents(std::string contents, std::string dna){
    std::cout << "The DNA Complement of " << dna << " is: " << contents << "\n";
}