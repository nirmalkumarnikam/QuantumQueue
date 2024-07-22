#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
string operation;
int last_instant, process_count;
vector<pair<char, int>> algorithms;
vector<tuple<string,int,int>> processes;
vector<vector<char>>timeline;
unordered_map<string,int>processToIndex;

//Results
vector<int>finishTime;
vector<int>turnAroundTime;
vector<float>normTurn;
