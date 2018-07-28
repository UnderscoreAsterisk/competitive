#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int P;
    cin >> P;
    P--;
    vec.erase(vec.begin()+P);
    
    int L, R;
    cin >> L >> R;
    vec.erase(vec.begin()+L-1, vec.begin()+R-1);
    
    vector<int>::iterator iter = vec.begin();
    while(iter != vec.end()){
        cout << *iter << " ";
        iter++;
    }
    return 0;
}
