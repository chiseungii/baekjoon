#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, P; cin >> N >> P;

    stack<int> guitar[7];
    int cnt = 0;

    for(int i=0; i<N; i++){
        int a, b; cin >> a >> b;

        if(guitar[a].empty()){
            guitar[a].push(b);
            cnt++;
        }
        else if(guitar[a].top() == b) continue;
        else if(guitar[a].top() < b){
            guitar[a].push(b);
            cnt++;
        }
        else{
            while(!guitar[a].empty() && guitar[a].top() > b){
                guitar[a].pop();
                cnt++;
            }

            if(guitar[a].empty() || guitar[a].top() < b){
                guitar[a].push(b);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
