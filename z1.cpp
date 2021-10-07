#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	int x,y;
	fstream plik;
	ofstream MyFile("wynik.txt");
	plik.open("wsp.txt", ios::in);
	while(!plik.eof()){ 
		plik >> x >> y;
		if(x>0){
			if(y>0){
				MyFile <<x<<" "<<y<<" æwiartka 1"<<endl;
			}
			else{
				MyFile <<x<<" "<<y<<" æwiartka 4"<<endl;
			}	
		}
		if(x<0){
			if(y>0){
				MyFile <<x<<" "<<y<<" æwiartka 2"<<endl;
			}
			else{
				MyFile <<x<<" "<<y<<" æwiartka 3"<<endl;
			}	
		}
	}
}

