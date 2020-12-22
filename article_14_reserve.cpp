#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include<cmath>
using namespace std;


int main()
{
    clock_t startTime, endTime;
    int N = pow(10, 8);

    startTime = clock();
    vector<int> v1;
    for(int i = 0; i < N; i++)
    {
        v1.push_back(2);
    }
    endTime = clock();
    cout<<"(push_back) The run time is: "<<(double)(endTime - startTime)/CLOCKS_PER_SEC<<"s"<<endl;

    startTime = clock();
    vector<int> v2;
    v2.reserve(N);
    for(int i = 0; i < N; i++)
    {
        v2[i] = 2;
    }
    endTime = clock();
    cout<<"(reserve)   The run time is: "<<(double)(endTime - startTime)/CLOCKS_PER_SEC<<"s"<<endl;

    startTime = clock();
    vector<int> v3(N, 2);
    endTime = clock();
    cout<<"(v(N, t))   The run time is: "<<(double)(endTime - startTime)/CLOCKS_PER_SEC<<"s"<<endl;

    startTime = clock();
    vector<int> v4;
    v4.assign(N, 2);
    endTime = clock();
    cout<<"(assign)    The run time is: "<<(double)(endTime - startTime)/CLOCKS_PER_SEC<<"s"<<endl;

    return 0;
}