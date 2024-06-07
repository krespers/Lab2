#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec(9);
vector<bool> visited(9,false); 


void func(int cnt) {
    if(cnt==M) {
        for(auto i =0;i<M;i++)
            cout << vec[i] << " ";
        cout << "\n";
    }else {
        for(auto i=1; i<=N;i++) {
            if(!visited[i]) {
                visited[i]=true;
                vec[cnt]=i; 
                func(cnt+1); 
                visited[i]=false;
            }
        }
    }

}

int main() {
   cin >> N >> M;
   func(0);
}