#include<iostream>
#include<math.h>
using namespace std;

/*

*
-*
--*
-*
*

*/

int main() {
	int n=11,i,j,k=1,l;
	float temp1=round((float)n/2);
	cout<<temp1<<endl;
	int temp=round(temp1);
	for(i=1; i<=n; i++) {
		int k =(i<=temp?i:(n-i+1));  // 11 - 7 + 1 = 5
		for(j=1; j<=k; j++) {
			if(j==k){
				cout<<"*";
			} else {
				cout<<"-";
			}

		}
		cout<<endl;
	}


	return 0;
}
