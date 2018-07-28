#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int>m;
    map<string, int>::iterator itr;
    int Q;
    string name;
    cin >> Q >> name;
    switch(Q) {
        case 1:
            int y;
            cin >> y;
            itr = m.find(name);
            if(itr == m.end()) m.insert(make_pair(name, 0));
            else itr->second++;
        break;
            
        case 2:
            m.erase(name);
        break;
            
        case 3:
            itr = m.find(name);
            if(itr == m.end()) cout << 0 << endl;
            else cout << itr->second << endl;
    }
    return 0;
}



