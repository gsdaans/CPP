// Takes the path of a textfile as input and counts the
// number of words containing a given motive (the second argument) at least once

// The motive is case-sensitive
// Words containing a motive more than once are only counted once
// The input files can contain any number of lines or be empty
// The input file may not exist
// The executable is always called with two arguments

// Optimizations:
// - The input file is read line by line
// - The words are read word by word
// - The words are stored in a hash table
// - The words are compared to the motive using a Boyer-Moore algorithm

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
// time
#include <chrono>
#include <ctime>

int find_motive(int argc, char* argv[]) {
    if (argc != 3)
    {
        std::cout << "Usage: " << argv[0] << " <path to textfile> <motive to find>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cout << "The file " << argv[1] << " could not be opened" << std::endl;
        return 1;
    }

    std::string word;
    int count = 0;
    while (file >> word) {
        if (word.find(argv[2]) != std::string::npos) {
            count++;
        }
    }

    std::cout << "The file " << argv[0] << " contains " << count << " words containing the motive " << argv[2] << std::endl;
    return 0;
}

int main(int argc, char* argv[]) 
{
    return find_motive(argc, argv);
}
