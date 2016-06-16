#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

void matmul(int **a, int m1, int n1, int **k, int m2, int n2){
	
	// Corner Case checks
	if(m1<0 || n1 < 0 || m2<0 || n2<0){
		cout<<"The row/column entered for either of matrices is a negative number"<<endl;
		exit(1);
	}

	if(n1 != m2){
		cout<<"Number of columns in Mat A != Number of columns in Mat B"<<endl;
		exit(1);
	}

	// Calculation

	// Result Matrix Initialize
	int **c = new int*[m1];
	for (int i = 0; i < m1; ++i){
		c[i] = new int[n2];
	}

	// Calculation
	for (int i = 0; i < m1; ++i){
		for (int b = 0; b < n2; ++b){
			int sum =0;
			for (int j = 0; j < m2; ++j){
				sum += 	a[i][j] * k[j][b];	
			}	
			c[i][b] = sum;
		}
	}


	// Print the result

	cout<<"Matrix Result["<<m1<<"]["<<n2<<"]"<<endl;
	for(int i=0; i<m1; ++i){
        for(int j=0; j<n2; ++j)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
}


int main()
{
	int m1, n1;
	int m2, n2;
	
	// Input First Matrix
	cout<<"Enter the Number of Rows for the M X N Matrix"<<endl;
	cout<<"Rows: M : "<<endl;
	cin>>m1;

	cout<<"Enter the Number of Columns for the M X N Matrix"<<endl;
	cout<<"Columns: N : "<<endl;
	cin>>n1;

	int** a = new int* [m1];

	for (int i = 0; i < m1; ++i)
		a[i] = new int[n1];

	for(int i =0; i<m1;++i){
		for (int j = 0; j < n1; ++j)
		{
			cout<<"Enter Elements at a["<<i<<"]["<<j<<"] position:"<<endl;
			cin>> a[i][j];
		}
	}
	
	//Input Second Matrix
	cout<<"Enter the Number of Rows for the M X N Matrix"<<endl;
	cout<<"Rows: M : "<<endl;
	cin>>m2;

	cout<<"Enter the Number of Columns for the M X N Matrix"<<endl;
	cout<<"Columns: N : "<<endl;
	cin>>n2;

	int** k = new int* [m2];

	for (int i = 0; i <m2; ++i)
		k[i] = new int[n2];

	for(int i =0; i<m2;++i){
		for (int j = 0; j < n2; ++j)
		{
			cout<<"Enter Elements at a["<<i<<"]["<<j<<"] position:"<<endl;
			cin>> k[i][j];
		}
	}
	
	cout<<"Matrix A["<<m1<<"]["<<n1<<"]"<<endl;
	for(int i=0; i<m1; ++i){
        for(int j=0; j<n1; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<"Matrix B["<<m2<<"]["<<n2<<"]"<<endl;
	for(int i=0; i<m2; ++i){
        for(int j=0; j<n2; ++j)
            cout<<k[i][j]<<" ";
        cout<<endl;
    }

    matmul(a,m1,n1,k,m2,n2);
	return 0;
}


