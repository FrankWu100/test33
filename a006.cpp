#include <iostream>
#include <cmath>
using namespace std;  
int main() {
	int a, b, c;
	int root1, root2;
	while(cin >> a >> b >> c){
		int temp = sqrt(b*b-4*a*c);
		root1 = (-b + temp) / (2*a);
		root2 = (-b - temp) / (2*a);
		if (temp >= 0)
		{
			if (root1 != root2)
			{
				cout << "Two different roots x1=";
				if (root1 >= root2)
					cout << root1 << " , x2=" << root2 << endl;
				else
					cout << root2 << " , x2=" << root1 << endl;
			}
			else if (root1 == root2)
				cout << "Two same roots x=" << root1 << endl;
		}
		else
			cout << "No real root" << endl;
	}
	return 0;
}