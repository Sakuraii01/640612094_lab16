#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int func[]={a,b,c,d};
	int temp;
	
	int ran = rand()%4;
	
	for(int i = 3 ; i >= 0; i--){
		temp = func[ran];
		func[ran] = func[i];
		func[i] = temp;
	}

	/*while(ran == ran2) ran2 = rand()%4;
	
	temp = func[ran];
	func[ran] = func[ran2];
	func[ran2] = temp;
	cout << func[0] <<endl;

	
		/*int ran = rand()%4+1;
		if(ran==1){
			i=j;
			j=temp1;
		}else if(ran==2){
			j=k;
			k=temp2;
		}else if(ran == 3){
			k=m;
			m=temp3;
		}else{
			m=i;
			i=temp4;
		}*/
	
}