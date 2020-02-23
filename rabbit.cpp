// Problem 1304A
#include <bits/stdc++.h>

double mod(double a, double L){
    return fmod((fmod(a,L)+L),L);   
}

int my_mod(int a, int b){
	return ((a%b)+b)%b;
}


using namespace std;

int main(void){

	int casos=0;

	cin >> casos;

	for (int i=0; i < casos; i++){

		int x=0,y=0;
		int vel_x=0,vel_y=0;
		int t=0;
		int R=0;

		int a=0,b=0;

		cin >> x >> y >> vel_x >> vel_y;

		a = y-x;
		b= vel_x + vel_y;

		if (b>a) {
			cout << -1 << endl;
			break;
		}
		
		if (b>0) {

			t =a/b;
			R = my_mod(a,b);
			if (R<1) cout << t << endl;
    		else cout << -1 << endl;
		}

	}//for			
	

	return 0;
}
