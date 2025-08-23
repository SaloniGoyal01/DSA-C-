#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vac;       // Empty vector

    vac.push_back(10);     // Insert 10 -> vac = {10}
    vac.push_back(20);     // Insert 20 -> vac = {10, 20}
    cout << vac.size()<<endl;    // Prints size (2)

    vac.pop_back();        // Removes last element (20)
    cout<<vac.size()<<endl;        // Prints size (1)

    cout<<vac.capacity();


}
