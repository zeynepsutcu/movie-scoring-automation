#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

	 void filmpuanlama1();
	 void filmpuanlama2();
	 void filmpuanlama3();
	 void filmpuanlama4();
int main()
{
	char anamenu;
	do
	{
	system("cls");
	cout<<"HOSGELDINIZ"<<endl;
	cout<<"1.film:Patch Adams"<<endl;
	cout<<"2.film:Hilda"<<endl;
	cout<<"3.film:Fakat muzeyyen bu derin bir tutku"<<endl;
	cout<<"4.film:close up"<<endl;
	cout<<"secim giriniz"<<endl;
	char secim;
	cin>>secim;
	switch (secim)
	{
		case '1':
			{
				 filmpuanlama1();
			
				break ;
			}
			case '2':
				{
					 filmpuanlama2();
				break;	
				}
			case '3':
			{
				 filmpuanlama3();
				break;
				}	
				case '4':
					{
					filmpuanlama4();	
						break;	
					}
			}
		
	
}
while (anamenu=='e' || anamenu=='E');
	return 0 ;	
}

void filmpuanlama1()
{
	ofstream yaz ("puanlar.dat",ios::binary | ios::app);
char anamenu;
int puan1;

do{
	
	cout<<"10 uzerinden puan veriniz"<<endl;
	cin>>puan1 ;
	
	
	cout<<"baska film puanlamak ister misiniz e/h"<<endl;
	cin>>anamenu;
	cout<<endl;
}
while (anamenu=='e' || anamenu=='E');

yaz.close();
}     
void filmpuanlama2()
{
	ofstream yaz ("puanlar.dat",ios::binary | ios::app);
char anamenu;
int puan2;
do{
	cout<<"10 uzerinden puan veriniz"<<endl;
	cin>>puan2 ;
	
	cout<<"baska film puanlamak ister misiniz e/h"<<endl;
	cin>>anamenu;
	cout<<endl;
}
while (anamenu=='e' || anamenu=='E');

yaz.close();
}     
void filmpuanlama3()
{
	ofstream yaz ("puanlar.dat",ios::binary | ios::app );
char anamenu;
int puan3;
do{
	cout<<"10 uzerinden puan veriniz"<<endl;
	cin>>puan3 ;
	
	cout<<"baska film puanlamak ister misiniz e/h"<<endl;
cin>>anamenu;
	cout<<endl;
}
while (anamenu=='e' || anamenu=='E');

yaz.close();
}     
void filmpuanlama4()
{
	ofstream yaz ("puanlar.dat",ios::binary | ios::app);
char anamenu;
int puan4;
do{
	cout<<"10 uzerinden puan veriniz"<<endl;
	cin>>puan4 ;
	
	cout<<"baska film puanlamak ister misiniz e/h"<<endl;
cin>>anamenu;
	cout<<endl;
}
while (anamenu=='e' || anamenu=='E');

yaz.close();
}     


