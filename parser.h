#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED


#include <bits/stdc++.h>


using namespace std;


string operation;                           
int last_instant, process_count;
vector<pair<char, int>> algorithms;         //algo id & quantum time
vector<tuple<string,int,int>> processes;    //name & arrvl time & srvicce time
vector<vector<char>>timeline;
unordered_map<string,int>processToIndex;    //ye switch cases mei kaam ayega

//Results
vector<int>finishTime;
vector<int>turnAroundTime;
vector<float>normTurn;
