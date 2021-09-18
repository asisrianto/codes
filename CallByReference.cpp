#include <iostream>
#include <conio.h>

using namespace std;

void myF (int &prima);

int main()
{
	int a=2;
	cout<<endl;
	myF(a);
	
	return 0;
}

void myF (int &prima) {
	prima = 15;
	    int faktor=0;
        for (int i=1;i<=prima;i++) {
            if (prima%i==0) {
            faktor++;
			} 
        }
        if (faktor==2) {
		cout<<"Bilangan Prima"; 
		}
        else {
		cout<<"Bukan Bilangan Prima";
		}
}
