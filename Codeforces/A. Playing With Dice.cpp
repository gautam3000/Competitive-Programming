// http://codeforces.com/problemset/problem/378/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
    int a , b ;
    cin >> a >> b ;
    int firstWin = 0 , secondWin = 0 , tie = 0 ;  
    for(int i = 1 ; i <= 6 ; i++) {
        if (abs( a - i) < abs (b - i) ) firstWin++ ;
        else if (abs( a - i) == abs (b - i) ) tie++ ;
        else if (abs( a - i) > abs (b - i) ) secondWin++ ;
    }
    cout << firstWin << " " << tie << " " << secondWin << endl ;
}
int32_t main()
{
    int testcases = 1 ;
    //cin >> testcases ;
    while(testcases--)
    {
        solve() ;
    }
    return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/