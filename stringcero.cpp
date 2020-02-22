#include <bits/stdc++.h>

//Problem 1303A

using namespace std;

int main(void){

	/*Variables*/
	int  t;
	char one ='1',
		zero ='0';

	string::iterator it;
	string::reverse_iterator it1;

	cin >> t;

	for (int i=0; i<t; i++){

		int counter=0;
		bool flag_1=false;

		string linea;
		cin >> linea;

		if (linea.size()>1){

			cout << linea.size() << endl;

			for(it1=linea.rbegin(); it1!=linea.rend(); it1++){

				if(*it1==zero) linea.pop_back();
				else break;

			}// for it1

			for (it=linea.begin(); it!=linea.end();it++){

				if (*it==one) flag_1=true;
				if (flag_1 && *it==zero) counter++;

			}//for it

		}//if linea.size

		//cout <<"Linea:"<< linea << endl;
		cout << counter << endl;

	}//For i


	return 0;
}