//стажёры
#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;
int main() {
	int N, n=0;
	cin>>N;
	std::string M[N];
	for (int i=0;i<N;++i) {
			cin>>M[i];
	}
	for (int k=0;k<N-1;++k) {
		for (int i=0; i<N-1;++i) {
			if (M[i]==M[i+1]) {
				if (i+1!= N-1) swap (M[i+1], M[i+2]);
				else swap (M[i+1], M[0]);
			}
		}
	}
	for (int i=0; i<N-1;++i) {
		if (M[i]==M[i+1]) n=1;
	}
	if (n==1) cout<<"IMPOSSIBLE";
	else 
	for (int i=0;i<N;++i)
	cout<<M[i]<<" ";
	
}
    