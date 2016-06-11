//Snackdown Pre-elimination Round-A
//Author- Prakhar Pratyush

// If there are three consecutive positions with the same colors, the answer is Yes, otherwise it is No

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
     
    int main(){
    	int T;
    	cin>>T;
    	while(T--){
    		int N;
    		cin>>N;
     
    		vector<int> C(N);
    		for(int i=0;i<N;i++){
    			cin>>C[i];
    		}
     
    		int count=1;
    		int max_count= INT_MIN;
    		for(int i=0;i<N-1;i++){
    			if(C[i]==C[i+1]) count++;
    			else count=1;
    			max_count=max(max_count,count);
    		}
     
    		if(max_count >= 3) cout<<"Yes"<<endl;
    		else cout<<"No"<<endl;
     
    		C.clear();
     
    	}
    	return 0;
     
    } 


/* Editorial solution

#include <iostream>
using namespace std;

int C[100011];
int main() {
    int z;
    cin >> z;
    for (int cas = 1; cas <= z; cas++) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> C[i];
        }
        bool found = false;
        for (int i = 2; i < n; i++) {
            if (C[i-2] == C[i-1] && C[i-1] == C[i]) {    // better and simpler approach
                found = true;
                break;
            }
        }
        cout << (found ? "Yes" : "No") << endl;
    }
}
*/

//If the output is one of two possibilities, try to use bool