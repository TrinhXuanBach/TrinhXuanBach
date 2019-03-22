#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector< vector< vector< vector<int> > > >matrix(2, vector< vector< vector<int> > >(2, vector< vector<int> >(2,vector<int>(2)) ));
    for ( int k = 0; k < 2; k ++)
    {
        for ( int i = 0; i < 2; i++ )
        {
            for ( int j = 0; j < 2; j++ )
            {
                for ( int z = 0; z < 2; z++ )
                {
                    cin >> matrix[k][i][j][z];
                }
            }
        }
    }
    for ( int k = 0; k < 2; k++ )
    {
        for ( int i = 0; i < 2; i++ )
        {
            for ( int j = 0; j < 2; j++ )
            {
                for ( int z = 0; z < 2; z++ )
                {
                    cout <<  matrix[k][j][i][z] << " ";
                }
            }
            cout << endl;
        }
    }
}
