#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <tuple>

using namespace std;

string operation;
int last_instant, process_count;
vector<pair<char, int>> algorithms; // algo id & quantum time
vector<tuple<string, int, int>> processes; // name, arrival time, service time
vector<vector<char>> timeline;
unordered_map<string, int> processToIndex; // this will be used in switch cases

// Results
vector<int> finishTime;
vector<int> turnAroundTime;
vector<float> normTurn;

void parse()
{
    string algorithm_chunk;
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

#endif // PARSER_H_INCLUDED