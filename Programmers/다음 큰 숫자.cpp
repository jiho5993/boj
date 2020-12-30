#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0)
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define ll long long
#define sc(x) cin>>x;
#define sc2(x,y) cin>>x>>y
#define sc3(x,y,z) cin>>x>>y>>z
#define sc4(x,y,z,w) cin>>x>>y>>z>>w
#define P(T) pair<T,T>
#define V(T) vector<T>
#define Q(T) queue<T>
#define S(T) stack<T>
#define DQ(T) deque<T>
#define VP(T) vector<pair<T,T>>
#define QP(T) queue<pair<T,T>>
#define SP(T) stack<pair<T,T>>
#define PQ(T) priority_queue<T>
#define GPQ(T) priority_queue<T,vector<T>,greater<T>>

int dec2bin(int n) {
    int ret=0;
    while(n) {
        ret += n%2;
        n/=2;
    }
    return ret;
}

int solution(int n) {
    int answer = n+1;

    int cnt = dec2bin(n);
    while(1) {
        if(cnt == dec2bin(answer)) break;
        answer++;
    }

    return answer;
}

int solution(int n) {
    int answer = n+1;

    int cnt = dec2bin(n);
    while(1) {
        if(cnt == dec2bin(answer)) break;
        answer++;
    }

    return answer;
}

int main() {
    FASTIO;
    
    auto res = solution(15);
    cout << res << '\n';

    return 0;
}