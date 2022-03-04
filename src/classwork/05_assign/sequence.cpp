#include "sequence.h"
#include <iostream>

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
    for (int i = dna.length(); i >= 0; i--) {
        temp_st += dna[i];
    }
    return temp_st;
}

// Function block for get_dna_complement
std::string get_dna_complement(std::string dna) {
    dna = reverse_string(dna);
    for (int i = dna.length(); i >= 0; i--) {
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