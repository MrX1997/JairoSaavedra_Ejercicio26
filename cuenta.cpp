#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <fstream>
#define PI 3.141592653589793
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>
using namespace std;
// obtaining file size
#include <iostream>
#include <string>
#include <fstream>
int* count(string td, int N);
char **split(int N);
char* nar;
char* nc;
char* nt;
using namespace std;
const int size=2500000;

int main (int argc, char *argv[] ) 
{

	if( argc != 4 ) 
	{
		cout << "La entrada debe ser de la forma archivo.txt cuenta.txt tiempo.txt\n", argv[0];
		exit(0);
  }
	nar=argv[1]
	nc=argv[2]
	nt=argv[3]


			cc=count(td);


	int i;
	for(i=0;i<5;i++)
	{
	cuenta << cc[i] << endl;
	}
	cuenta.close();
 	
	tiempo << rtime <<'\n';
	tiempo.close();
  return 0;
}
void count(char **c,int N)
{

	double rtime;
			const int colums = size/N;
			const int rows = N; 
			int ct[rows][5];
			int i;//
			int j;//
			for(i=0;i<rows;i++)
			{
				clock_t begin = clock();
				for(j=0;j<colums;j++)
				{
				if(c[i][j]=='1')
				{
					ct[i][0]=c[i][0]+1;
					if(c[i][j+1]=='2')
					{
						ct[i][1]=ct[i][1]+1;
						if(c[i][j+1]=='3')
						{
							ct[i][2]=ct[i][2]+1;
							if(c[i][j+1]=='4')
							{
								ct[i][3]=ct[i][3]+1;
								if(c[i][j+1]=='5')
								{
									ct[i][4]=ct[i][4]+1;
								}
							}
						}
					}
				}
				clock_t end = clock();
				rtime = double((end-begin))/(CLOCKS_PER_SEC);
			}				
			
		
		
	///cout<<size;
	  archivo.close();
 	rtime = double((end-begin))/(CLOCKS_PER_SEC);
	tiempo << rtime <<'\n';
	tiempo.close();
}
char **split(int N)
{
	string line;
	string text;
	ifstream archivo (nar);
	if (archivo.is_open())
	{
		while ( getline (archivo,line) )
		{
			text=text+ line;
		}
		archivotxt.close();
	}
	else cout << "No se pudo abrir el archivo_2\n"; 

	const int sizeparte=text.size()/N;
	char partes [N][sizeparte];
	int i;
	int j;
	for(i=0;i<=sizeparte;i++)
	{
		for(j=0;j<N;j++)
		{
			partes[j][i]=text[j*sizeparte+i];
		}	
	}


}

