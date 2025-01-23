#include <bits/stdc++.h>
using namespace std;


string bigSum(string num1, string num2) {
    string ans;
    int carry = 0, sum;

    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;

        sum = x + y + carry;
        ans += (sum % 10) + '0';
        carry = sum / 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


string fibonacci500(int n) {
    if (n == 0) return "0";
    if (n == 1) return "1";

    string a = "0"; 
    string b = "1"; 
    string c;

    for (int i = 2; i <= n; i++) {
        c = bigSum(a, b); 
        a = b;           
        b = c;          
    }

    return c;
}

int main() {
    int n = 500; 
    string result = fibonacci500(n);
    cout << "Fibonacci(500): " << result << endl;

    return 0;
}
