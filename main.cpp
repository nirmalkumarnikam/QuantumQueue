#include <bits/stdc++.h>
#include <iostream>
#include "parser.h"
using namespace std;

void firstComeFirstServe(){
    
}
void roundRobin(){

}
void shortestProcessNext(){

}
void shortestRemainingTime(){

}
void highestResponseRatioNext(){

}
void feedbackQ1(){

}
void feedbackQ2i(){

}
void aging(){

}


void execute_algorithm(char algorithm_id, int quantum,string operation)
{
    switch (algorithm_id)
    {
    case '1':
        firstComeFirstServe();
        break;
    case '2':
        roundRobin();
        break;
    case '3':
        shortestProcessNext();
        break;
    case '4':
        shortestRemainingTime();
        break;
    case '5':
        highestResponseRatioNext();
        break;
    case '6':
        feedbackQ1();
        break;
    case '7':
        feedbackQ2i();
        break;
    case '8':
        aging();
        break;
    default:
        break;
    }
}


int main()
{
    parse();
    return 0;
}