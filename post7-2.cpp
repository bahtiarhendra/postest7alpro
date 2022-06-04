#include<iostream>
#include<string>
using namespace std;
void sorting(){
	int x,i,j;
	int tmp, var;
	int data[20];
	
	data[1] = 9;
	data[2] = 2;
	data[3] = 1;
	data[4] = 4; 
	data[5] = 11;
	data[6] = 10;
	data[7] = 18;
	data[8] = 6;
	
	i=1;
	while (!(i>8))
	{
		x = 1;
		while (!(x>i))
		{
			if (x<9)
			{
				if (data[x]>data[i])
				{
					tmp = data[i];
					var = data[x];
					data[x] = tmp;
					data[i] = var;
				}
				else
				{
				}
			}
			else
			{
			}
			x = x+1;
	   }
		i=i+1;
	}
	i=1;
	while(!(i>8))
	{
		cout<<"\t"<<data[i]<<endl;		i=i+1;
	}
}
int main()
{
	int i;
	int j;
	int data[2];
	
	data[1] = 9;
	data[2] = 2;
	data[3] = 1;
	data[4] = 4; 
	data[5] = 11;
	data[6] = 10;
	data[7] = 18;
	data[8] = 6;
	j = 8;
	i = 1;
	cout<<"Sebelum di Sorting"<<endl; 	while (!(i>j))
	{
		cout<<"\t"<<data[i]<<endl;		i=i+1;
	}
	cout<<"\n Sesudah di Sorting"<<endl;		sorting();
	return 0;
}


			
