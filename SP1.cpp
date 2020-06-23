#include<iostream>
#include <vector>       //vector
#include <algorithm> //sort()
using namespace std;

int main()
{
    vector<int> v = {1,82,4,11,29,5,20,11,8,10,3};

    cout << "Sebelum di urutkan:\n";
    for(auto it =v.begin(); it != v.end(); ++it)
    {
        cout << *it <<endl;
    }
    sort(v.begin(), v.end());
    cout << "TEKNIK SORTING DSC: \n";
    for(auto it =v.end(); it >= v.begin(); --it)
    {
        cout << *it <<endl;
    }
    sort(v.begin(), v.end());
    cout << "TEKNIK SORTING ASC: \n";
    for(auto it =v.begin(); it != v.end(); ++it)
    {
        cout << *it <<endl;
    }
}
