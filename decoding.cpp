#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int _ = 0; _ < T; _++) {
	    string s;
	    int N;
	    cin >> N >> s;
	    
	    if(N == 1) {cout << 1 << endl; break;}
	    else if (N == 2) {
	        if(s > "26") cout << 1 << endl;
	        else cout << 2 << endl;
	        
	        break;
	    } else {
	        long long first = 0, second = 0;
	        for(int i = 0; i < N-1; i+=2)
	            if (s.substr(i, 2) <= "26") first += 1;
	            
	        for(int i = 1; i < N-1; i+=2)
	            if (s.substr(i, 2) <= "26") second += 1;
	            
	        if (second > 0) second = (long long)pow(2, second) -1;
	        cout << (long long)pow(2, first) + second << endl; 
	    }
	}
	return 0;
}