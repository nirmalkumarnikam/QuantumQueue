#pragma once

#include <iostream>
#include <string>

class Parser {

public:
    Parser() = default;
    void parse() {
        using namespace std; // do not use globally in header files
        cin >> operation >> algorithm_chunk >> last_instant >> process_count;

        // Debug statements to check input
        cout << "Operation: " << operation << endl;
        cout << "Algorithm Chunk: " << algorithm_chunk << endl;
        cout << "Last Instant: " << last_instant << endl;
        cout << "Process Count: " << process_count << endl;


        if (cin.fail()) {
            cerr << "Error reading input." << endl;
            return;
        }

        // Debug statements to check initialization
        cout << "Initialization complete." << endl;
    }
private:
    std::string algorithm_chunk;
    std::string operation;
    int last_instant{}, process_count{};
};
