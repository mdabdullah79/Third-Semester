// Bismillahir Rahmanir raheem
#ifdef ONLINE_JUDGE
    #include<bits/stdc++.h>
#endif
#include<iostream>
#include<ctime>
#include<numeric>
#include<tuple>
#include<iomanip>
#include<cstdlib>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<cmath>
#include<cstdio>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<sstream>
#include<cstring>
#include<deque>
#include<set>
using namespace std;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int,int> > vii;
typedef pair<int, int> pii;
typedef vector<bool> vbl;
typedef vector<pair<ll,ll> > vll;
typedef pair<ll, ll> pll;

#define PQ priority_queue
#define ff first
#define ss second
#define MP make_pair
#define MT make_tuple
#define mxN (int)2e5 + 2
#define sz(n) (int)(n).size()
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
#define forc(cn) for(auto &x : (cn))
#define findc(cn, abc) ((cn).find(abc) != (cn).end())
#define PI (acos(-1.0))
#define MAXN 200010
#define torad(x) ((x) * ((2*acos(0))/180.0))
#define todeg(x) ((x) * (180.0/(2*acos(0))))
#define fixAngle(x) ( (x) > 1 ? 1 : (x) < -1 ? -1 : (x))
const ll INF = 100000000000000000ll;
const int mod = 1e9 + 7;
#define eps 1e-9
#define inf 10000000

struct Node
{
    int data;
    Node* link;
};
Node* head = 0;

void insert(int val, int pos)
{
    if(pos == 1) {
        Node* temp = new Node;
        (*temp).data = val;
        (*temp).link = 0;

        (*temp).link = (*head).link;
        head = temp;
    }
}

void Delete(int pos)
{
    if(pos == 1) {
        Node* t = head;
        head = (*t).link;
        delete t;
        return;
    }


    Node* t = head;
    Node* prev;
    for(int i = 1; i < pos; i++) {
        prev = t;
        t = (*t).link;
    }

    (*prev).link = (*t).link;
    delete t;
}


void insert(int val)
{
    if(head == 0) {
        head = new Node;
        (*head).data = val;
        (*head).link = 0;
    }
    else {
        // create a new node
        Node* temp = new Node;
        (*temp).data = val;
        (*temp).link = 0;

        // add it to the end of the list
        Node* t = head;
        while((*t).link != 0){
            t = (*t).link;
        }
        (*t).link = temp;
    }
}
void print()
{
    Node* t = head;
    while(1)
    {
        cout << (*t).data << " ";
        if((*t).link == 0) break;
        t = (*t).link;
    }
    cout << endl;
}

bool search(int val)
{
    Node* t = head;
    while(1)
    {
        if((*t).data == val)
            return true;

        if((*t).link == 0) break;
        t = (*t).link;
    }
    return false;
}

int main()
{
    freopen("input.txt", "r+", stdin);
    freopen("output.o", "w+", stdout);
    
    int a;
    for(int i = 0; i < 5; i++) {
        cin >> a;
        insert(a);
    }

    print();

    cout << search(50) << endl;

    print();



    return 0;
}




















