#include <iostream>
#include <conio.h>

using namespace std;

void callbyval (int prima)
{
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

main()
{
	int a=4;	
	callbyval(a);
	cout<<endl;
	getch();
}
