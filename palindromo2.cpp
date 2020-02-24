//
#include <bits/stdc++.h>

int my_mod(int a){
	return ((a%2)+2)%2;
}

using namespace std;

int main(void){

	int n=0, m=0;

	cin >> n >> m;

	vector<string> palindromo;

	string::iterator it;
	string::reverse_iterator it_r;

	vector<set<int>> result;
	vector<set<int>> self;

	string output;

	result.resize(n);
	self.resize(n);

	palindromo.resize(n);

	for (int i=0; i<n; i++) cin >> palindromo[i];

	bool flag=false;
	bool self_flag=true;


	/*Autopalindromo*/

	for(int i=0; i<n; i++){

		int counter=0;
		
		for(int s=0;s<m; s++) {

			if (palindromo[i].at(s)==palindromo[i].at(m-s-1)) counter++;				
	
		}

		if (counter==m) self[i].insert(i); 
	}
	
	/*****************/


	for (int i=0; i<n; i++){

		for(int j=i+1; j<n;j++){

			for(int s=0; s<m; s++) {

				if (palindromo[i].at(s)!=palindromo[j].at(m-s-1)){
					flag=true;
					break;
				}
			}

			if (!flag) {
				
				result[i].insert(i);
				result[i].insert(j);
			}

			flag =false;
		}
	}	



	string autopalindromo;

	for (int i=0; i<n; i++){

		if (!result[i].empty()){

			output+=palindromo[*result[i].begin()];
		}

		if(!self[i].empty() && self_flag) {
			autopalindromo=palindromo[*self[i].begin()];
			self_flag=false;

		}
	}

	string reverse_ouput;
	string salida;

	for (it_r=output.rbegin();it_r!=output.rend();it_r++ ){
		reverse_ouput+=*it_r;
	}

	salida= output + autopalindromo + reverse_ouput;

	cout << salida.size() << endl; 
	cout << salida  << endl;

	return 0;
}











/*


	for (int i=0; i<n; i++){

		if (result[i].empty()) cout << i << " Vacio"<<endl;
		
		else{

			cout << i;
			for (auto elem: result[i]){
				cout << " " << elem << " ";
			}
			cout << result[i].size();
			cout << endl;
		}
	}

	cout << endl;

	for (int i=0; i<n; i++){

		if (self[i].empty()) cout << i << " Vacio"<<endl;
		
		else{

			cout << i;
			for (auto elem: self[i]){
				cout << " " << elem << " ";
			}
			cout << endl;
		}
	}

	cout << endl;
	*/