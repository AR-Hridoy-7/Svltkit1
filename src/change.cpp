#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
#define setbit(x, i) (x | (1 << i))
#define resetbit(x, i) ((x) & (~(1 << i)))
const int N = 1e6 + 7;
const int M = 1e9 + 7;

int next[(1 << 13)][13]; // next[bitmask][cur] = next lis mask when
//the current lis mask is bitmask and cur is added to the end;
 
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	int tt = 1;
  	//cin >> tt;
  	for(int tc = 1; tc <= tt; tc++){
  		//cout << "Case " << tc << ": ";
  		
  	}
  	return 0;
}

//https://codeforces.com/blog/entry/20829