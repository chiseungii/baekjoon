#include <iostream>
#include <stack>
using namespace std;

int main() {
    double nums[26];

    int N; cin >> N;
    string input; cin >> input;
    for(int i=0; i<N; i++) cin >> nums[i];

    stack<double> cal;
    for(int i=0; i<input.length(); i++){
        if(isalpha(input[i])) cal.push(nums[input[i] - 'A']);
        else{
            double b = cal.top();
            cal.pop();
            double a = cal.top();
            cal.pop();

            switch(input[i]){
                case '+':
                    cal.push(a + b);
                    break;

                case '-':
                    cal.push(a - b);
                    break;

                case '*':
                    cal.push(a * b);
                    break;

                case '/':
                    cal.push(a / b);
                    break;

                case '%':
                    cal.push((int)a % (int)b);
                    break;
            }
        }
    }

    printf("%.2f\n", cal.top());
}
