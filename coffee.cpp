//
// Created by 최선필 on 06/02/2019.
//
#include <iostream>
#include <set>
#include <cmath>
#include <utility>
#include <cstdio>
using namespace std;
class Coffee
{
private:
    set<pair<int,int> > coffeeMachine;
    int *result;
    int result_size ;
    int remainder;
public:
    Coffee()
    {
        result_size = 0;
    }
    void solution(int *coffee_times,int len,int machine_num)
    {
        for(int  i =0  ; i < machine_num ;i++)
            coffeeMachine.insert(pair<int,int>(coffee_times[i] ,i+1));
        remainder = machine_num;
        result = new int[len];

        while(!coffeeMachine.empty()) {
            int reservation;
            int time;
            set<pair<int,int> >::iterator itr =  coffeeMachine.begin();
            reservation = itr->second;
            time = itr->first;
            coffeeMachine.erase(itr);


            itr = coffeeMachine.begin();
            if(time > 0) {
                int m = machine_num -1;
                if(coffeeMachine.size() < (machine_num -1))
                    m = coffeeMachine.size();
                for (int i = 0; i < m; i++) {
                    set<pair<int,int> >::iterator tmp = itr++;
                    int tmp_res = tmp->second;
                    int tmp_time = tmp->first - time;
                    coffeeMachine.erase(tmp);
                    coffeeMachine.insert(pair<int, int>(tmp_time, tmp_res));
                }
            }
            if(remainder  <len)
            {
                coffeeMachine.insert(pair<int, int>(coffee_times[remainder], remainder+1));
                remainder++;
            }
            result[result_size] = reservation;
            result_size++;
        }
        cout<<"[";
        for(int  i =0  ; i < len ; i++)
        {
            cout<<result[i];
            if(i != (len-1))
                cout<<",";
        }
        cout<<"]";
    }
};



