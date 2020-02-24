//Problem 1304 B
#include <bits/stdc++.h>

int my_mod(int a){
	return ((a%2)+2)%2;
}

using namespace std;

int main(void){

	int n=3;
	int m=4;
	int paridad=0;

	string::iterator it;
	string::reverse_iterator it_r;


	vector<string> palindromo;
	palindromo.resize(n);

	string result,result_new,pares;
	string middle;

	cout << middle.size()<< endl;

	palindromo[0]="hello";
	palindromo[1]="codef";
	palindromo[2]="orces";



	for (int i=0; i<n; i++) result+=palindromo[i];	

	cout << result << endl;
	
	int last = result.size()-1;

	paridad = my_mod(result.size());

	cout << "size:" << result.size() <<  endl;
	cout << endl; 
		
	result_new=result;
	

	int contador=0;
	int lower =0;

	bool impar=false,flag=true;

	while( ((m*n)/2 + paridad) > contador ){
	
		contador++;
		cout << "counter: " << contador;

		result_new.pop_back();


		int locator = 0;	

		for (it=result_new.begin(); it!=result_new.end();it++){

			if 	(result.at(last-lower)==*it) {

				pares+=*it;
				result_new.erase(locator,1);
				impar=true;
				cout << " flag";			
				break;
			}//if	
			locator++;			
		}//for

		cout << endl;

		if (!impar && flag) {
			
			middle=result.at(last-lower);
			flag=false;
		}

		impar=false;  
		lower++;
	}//while

	cout << endl;
	cout <<"result_new   : " <<result_new << endl;
	cout <<"pares        : " <<pares << endl;
	cout <<"middle       : " << middle << endl;
	

	string pares_reverse;

	for (it_r=pares.rbegin();it_r!=pares.rend();it_r++){

		pares_reverse+=*it_r;
	}

	cout <<"pares_reverse: " <<pares_reverse << endl;

	result=pares + middle + pares_reverse;
	cout <<"result       : " << result << endl;

	return 0;
}