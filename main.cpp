#include <bits/stdc++.h>
#include "parser.h"
using namespace std;


void clear_timeline()
{
    for(int i=0; i<last_instant; i++)
        for(int j=0; j<process_count; j++)
            timeline[i][j] = ' ';
}


string getProcessName(tuple<string, int, int> &a)
{
    return get<0>(a);
}
int getArrivalTime(tuple<string, int, int> &a)
{
    return get<1>(a);
}
int getServiceTime(tuple<string, int, int> &a)
{
    return get<2>(a);
}


void firstComeFirstServe()
{
    int time = getArrivalTime(processes[0]);
    for (int i = 0; i < process_count; i++)
    {
        int processIndex = i;
        int arrivalTime = getArrivalTime(processes[i]);
        int serviceTime = getServiceTime(processes[i]);

        finishTime[processIndex] = (time + serviceTime);
        turnAroundTime[processIndex] = (finishTime[processIndex] - arrivalTime);
        normTurn[processIndex] = (turnAroundTime[processIndex] * 1.0 / serviceTime);

        for (int j = time; j < finishTime[processIndex]; j++)
            timeline[j][processIndex] = '*';
        for (int j = arrivalTime; j < time; j++)
            timeline[j][processIndex] = '.';
        time += serviceTime;
    }
}
void roundRobin(int originalQuantum){

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
void aging(int originalQuantum){

}


void execute_algorithm(char algorithm_id, int quantum,string operation)
{
    switch (algorithm_id)
    {
    case '1':
        cout<<"FCFS ";
        firstComeFirstServe();
        break;
    case '2':
        roundRobin(quantum);
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
        aging(quantum);
        break;
    default:
        break;
    }
}


void printTimeline(int algorithm_index)
{
    for (int i = 0; i <= last_instant; i++)
        cout << i % 10<<" ";
    cout <<"\n";
    cout << "------------------------------------------------\n";
    for (int i = 0; i < process_count; i++)
    {
        cout << getProcessName(processes[i]) << "     |";
        for (int j = 0; j < last_instant; j++)
        {
            cout << timeline[j][i]<<"|";
        }
        cout << " \n";
    }
    cout << "------------------------------------------------\n";
}

//future scope ke liye 
void printStats(){

}


int main()
{
    parse();
    for (int i = 0; i < (int)algorithms.size(); i++)
    {
        clear_timeline();
        execute_algorithm(algorithms[i].first, algorithms[i].second,operation);
        printTimeline(i);
        cout << "\n";
    }   
    return 0;
}