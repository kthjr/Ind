// project_sam.cpp: определяет точку входа для консольного приложения.

 #include "stdafx.h"
 #include <iostream>
 using namespace std;

int main()
{

	int a, b, c, input;
	
	cout<<"Vvedite pervoe chislo:";
	cin>>a;
	cout<<"Vvedite vtoroe chislo:";
	cin>>b;

	printf( "Vyberite deistvie?\n" );
    printf( "1. +\n" );

	printf( "Vash vybor: " );
    scanf("%d", &input );

	switch ( input ) {
        case 1:           
            c = a+b;
			cout<<"Otvet:"<<c<<endl;
            break;
	}

	system("pause");

	return 0;
}

