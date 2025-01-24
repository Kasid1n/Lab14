#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 
void showMatrix(const bool x[][N]){

for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
    
}
}
void inputMatrix(double x[][N]){
    for(int i=0;i<N;i++){
        cout<<"Row "<<i+1<<": ";
        for(int j=0;j<N;j++){
            cin>>x[i][j];
        }
    
        
    }
}
void findLocalMax(const double x[][N], bool y[][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(x[i][j]>=x[i-1][j]&&x[i][j]>=x[i+1][j]&&x[i][j]>=x[i][j-1]&&x[i][j]>=x[i][j+1]){
                y[i][j]=true;
            }
            else
            y[i][j]=false;
            
            y[0][j]=false;
            y[N-1][j]=false;
            y[i][0]=false;
            y[i][N-1]=false;
        }
            
        
    }
}