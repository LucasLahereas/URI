#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <stdio.h>

using namespace std;
main()
{
	string P1, P2;
	int N, i, j, cont;
	
	cin>>N;
	for(i=0; i<N; i++)
	{
		cin>>P1>>P2;
		for(j=0; j<P1.size(); j++)
		{
			while(P1[j]!=P2[j])
			{
				P1[j]++;
				cont++;
				if(P1[j]>=123)
				{
					P1[j]=97;
				}
			
			}
		}
		cout<<cont<<endl;
		cont=0;
	}
	
	
	system("pause");
	return 0;
}
