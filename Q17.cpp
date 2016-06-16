#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void set_zero(int **a,int m, int n){

	//bool rows[m], cols[n];

	vector<int> rows, cols;
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			if(a[i][j] == 0){
				
				rows.push_back(i);
				cols.push_back(j);

				// Buggy
				// if(!rows[i]){
				// 	rows[i] =true;	
				// }
				// if(!cols[j]){
				// 	cols[j] =true;
				// }
			}
		}
	}

	// Buggy
	// for (int i = 0; i < m; ++i)
	// {
	// 	for (int j = 0; j < n; ++j)
	// 	{
	// 		if(rows[i] || cols[j]){
	// 			a[i][j] =0;
	// 		}
	// 	}
	// }

	for(int i=0;i<rows.size();i++)
	{
		for(int j=0;j<n;j++)
			a[rows[i]][j]=0;
	}

	for(int i=0;i<cols.size();i++)
	{
		for(int j=0;j<m;j++)
			a[j][cols[i]]=0;
	}



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

	cout<<"Enter the Number of Rows and Columns for the M X N Matrix"<<endl;
	cout<<"Rows: m : "<<endl;
	cin>>m;
	
	cout<<"Columns: n : "<<endl;
	cin>>n;

	// int a[n][n];

	int** a = new int* [m];

	for (int i = 0; i < n; ++i)
		a[i] = new int[n];

	for(int i =0; i<m;++i){
		for (int j = 0; j < n; ++j)
		{
			cout<<"Enter Elements at a["<<i<<"]["<<j<<"] position:"<<endl;
			cin>> a[i][j];
		}
	}
	
	cout<<"Matrix A["<<m<<"]["<<n<<"]"<<endl;
	for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    set_zero(a, m, n);

    cout<<"Setting 0 to Rows and Columns..."<<endl;
    cout<<"Matrix Transformation"<<endl;
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
}