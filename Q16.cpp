#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}


void transporse(int **a, int n){
	for (int i = 0; i < n; ++i)
		for (int j = i+1; j < n; ++j)
			swap(a[i][j],a[j][i]);

	for (int i = 0; i < n/2; ++i)
		for (int j = 0; j < n; ++j)
			swap(a[i][j],a[n-1-i][j]);		
}

int main()
{
	// int a[4][4] = {
	// 	{3, 7, 8, 1},
	// 	{5, 4, 2, 6},
	// 	{9, 3, 4, 7},
	// 	{1, 5, 2, 6}
	// };

	// cout<<"4 X 4 Matrix "<<a[1][0]<<endl;

	int m,n;

	cout<<"Enter the Number of Rows and Columns for the N X N Matrix"<<endl;
	cout<<"Rows: n : "<<endl;
	cin>>n;

	// int a[n][n];

	int** a = new int* [n];

	for (int i = 0; i < n; ++i)
		a[i] = new int[n];

	for(int i =0; i<n;++i){
		for (int j = 0; j < n; ++j)
		{
			cout<<"Enter Elements at a["<<i<<"]["<<j<<"] position:"<<endl;
			cin>> a[i][j];
		}
	}
	
	cout<<"Matrix A["<<n<<"]["<<n<<"]"<<endl;
	for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    transporse(a,n);

    cout<<"Rotating by 90 degrees.."<<endl;
    cout<<"Transporse Matrix"<<endl;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
}