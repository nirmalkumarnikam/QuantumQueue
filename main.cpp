// #include<iostream>
// #include "parser.h"
// #include <bits/stdc++.h>


// #define all(v) v.begin(), v.end()

// using namespace std;

// //ya goshtin var code kaam karel...  hope so will make all these algos work
// const string TRACE = "trace";
// const string SHOW_STATISTICS = "stats";
// const string ALGORITHMS[9] = {"", "FCFS", "RR-", "SPN", "SRT", "HRRN", "FB-1", "FB-2i", "AGING"};


// int main(){
//     cout<< "CPU Scheduling Simulator"<<endl;
//     return 0;
// }



#include <iostream>
#include <fstream>
#include <string>
#include "parser.h"
using namespace std;


int main() {
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        cout<<"slkadslf;la";
    }

    inputFile.close();
    return 0;
}