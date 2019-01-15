#include <bits/stdc++.h>
typedef std::stack<int> IntStack;
typedef std::stack<char> charStack;
 
using namespace std;
using ll = long long;
typedef pair <int, int> pii;

	ll memo[1003][1003] = {};
	ll memo2[1003][1003] = {};
    	IntStack xStack;
	IntStack yStack;
	charStack Stack;

int main()
{
	ll a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, ans = 0;
	ll n;

	char tmp;
	//ll y[1003][1003] = {};
	//ll y[100005] = {};
	//ll z[100005] = {};
	string s[1003];

    
    /*
	cin >> a;
	cin >> b;
	for (int i = 0; i < a; i++)
	{
		cin >> s[i];
	}
  */
   
    a = 100;
    b = 100;
    random_device rnd;
    mt19937 mt(rnd());
    uniform_int_distribution<> rand100(0,1);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
        int aa = rand100(mt);
       // cout << aa << ' ';
        if((i+j)%2 == 0)   s[i][j]='#';
        else    s[i][j] +='.';
        }
       // cout << endl;
    }
    for(int i = 0; i < h; i++){
       // cout << s[i] << endl;
    }


	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			if (s[i][k] == '#'&&memo2[i][k]==0)
			{
				for (int z = 0; z < a; z++)
				{
					for (int y = 0; y < b; y++)
					{
						memo[z][y] = 0;
					}
				}
				yStack.push(i);
				xStack.push(k);
				Stack.push('#');
				while (xStack.size() > 0)
				{
					c = yStack.top();
					yStack.pop();
					d = xStack.top();
					xStack.pop();
					tmp = Stack.top();
					Stack.pop();
					memo[c][d] = 1;
					//cout << c << endl;
					//cout << d << endl;
					if (0 <= c+1&&c+1 < a && 0 <= d&&d < b&&memo[c+1][d] == 0 && s[c+1][d] != tmp)
					{
						yStack.push(c+1);
						xStack.push(d);
						memo[c + 1][d] = 1;
						memo2[c+1][d] = 1;
						if (tmp == '#')
						{
							Stack.push('.');
						}
						else
						{
							Stack.push('#');
						}
						//cout << yStack.top() << endl;
						//cout << xStack.top() << endl;
						//cout << Stack.top() << endl;
 
					}
					if (0 <= c-1&&c-1 < a && 0 <= d&&d < b&&memo[c-1][d] == 0 && s[c-1][d] != tmp)
					{
						yStack.push(c-1);
						xStack.push(d);
						memo[c - 1][d] = 1;
						memo2[c-1][d] = 1;
						if (tmp == '#')
						{
							Stack.push('.');
						}
						else
						{
							Stack.push('#');
						}
 
					}
					if (0 <= c&&c < a && 0 <= d+1&&d+1 < b&&memo[c][d+1] == 0 && s[c][d+1] != tmp)
					{
						yStack.push(c);
						xStack.push(d+1);
						memo[c][d + 1] = 1;
						memo2[c][d+1] = 1;
						if (tmp == '#')
						{
							Stack.push('.');
						}
						else
						{
							Stack.push('#');
						}
 
					}
					if (0 <= c&&c < a && 0 <= d-1&&d-1 < b&&memo[c][d-1] == 0 && s[c][d-1] != tmp)
					{
						yStack.push(c);
						xStack.push(d-1);
						memo[c][d - 1] = 1;
						memo2[c][d-1] = 1;
						if (tmp == '#')
						{
							Stack.push('.');
						}
						else
						{
							Stack.push('#');
						}
						
					}
					
					//cout << endl;
 
				}
				e = 0;
				f = 0;
				for (int z = 0; z < a; z++)
				{
					for (int y = 0; y < b; y++)
					{
						if ((i + k) % 2 != (z + y) % 2 && memo[z][y] == 1)
						{
							e++;
						}
						else if(memo[z][y] == 1)
						{
							f++;
						}
					}
				}
				ans += e*f;
				//cout << e << endl;
				//cout << f << endl;
				//cout << endl;
 
			}
		}
	}
 
	cout << ans << endl;
	//cout << ans << endl;
 
	////std::cout << std::fixed;
	//cout << std::setprecision(20) << << endl;
	//cout << d+1 << endl;
	//cout << "" << endl;
 
	return 0;
}
//char型の文字数字は、-'0'で数値に変換できる
//accumulate(x, x + a, 0);//int型までの配列の合計
//memcpy(x, visited, sizeof(ll)*n);
//void kansuu(ll num, ll visited[10]) {}
//kansuu(1, zz);
//cout << setprecision(15) << v << endl;
//cout << char(z - 'a');
//log10(i) + 1 //10進数の桁数を取得
 
//int temp;
//for (int i = 0; i < n - 1; i++) {
//	for (int j = n - 1; j > i; j--) {
//		if (w[j - 1] < w[j]) {  /* 前の要素の方が大きかったら */
//			temp = w[j];        /* 交換する */
//			w[j] = w[j - 1];
//			w[j - 1] = temp;
//		}
//	}
//}
 
//最小公倍数
//ll x = a * b;
//ll tmp;
///* 自然数 a > b を確認・入替 */
//if (a<b) {
//	tmp = a;
//	a = b;
//	b = tmp;
//}
///* ユークリッドの互除法 */
//ll r = a % b;
//while (r != 0) {
//	a = b;
//	b = r;
//	r = a % b;
//}
//a = x / b;//答え