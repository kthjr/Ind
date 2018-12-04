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
    printf( "2. -\n" );
    printf( "3. *\n" );
    printf( "4. /\n" );

	printf( "Vash vybor: " );
    scanf("%d", &input );

	switch ( input ) {
        case 1:           
            c = a+b;
			cout<<"Otvet:"<<c<<endl;
            break;
        case 2:
            c = a-b;
			cout<<"Otvet:"<<c<<endl;
            break;
        case 3:
            c = a*b;
			cout<<"Otvet:"<<c<<endl;
            break;
        case 4:
			if (b != 0) 
			{
				c = a/b;
				cout<<"Otvet:"<<c<<endl;
			}
			else 
			{
				printf( "Division by zero.\n" );
			}
	}

	system("pause");

	return 0;
}

