#include <iostream>
using namespace std;

int main()
{
    int r1, r2, c1, c2;
    cout << "Enter rows and columns of matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of matrix B: ";
    cin >> r2 >> c2;

    // Checking validity
    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied. Invalid order!!!" << endl;
        return 1;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    // Taking element for matrices
    cout << "Enter elements for matrix A: " << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cout << "Enter element for position A" << i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }
    cout << "Enter elements for matrix B: " << endl;
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << "Enter element for position B " << i+1 << j+1 << ": ";
            cin >> B[i][j];
        }
    }

    // Multiplication

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // printing resultant matrix
    cout << "Resltant Matrix: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout <<"  "<< C[i][j];
        }
        cout << endl;
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
//     cout << "Enter rows and columns for first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns for second matrix: ";
//     cin >> r2 >> c2;
//     if (c1 != r2)
//     {
//         cout << "Cant be multiplied";
//         return 0;
//     } // Storing elements of first matrix.
//     cout << "Enter elements of matrix 1:" << endl;
//     for (i = 0; i < r1; ++i){
//         for (j = 0; j < c1; ++j)
//         {
//             cout << "Enter element a" << i + 1 << j + 1 << " : ";
//             cin >> a[i][j];
//         } }// Storing elements of second matrix.
//     cout << endl << "Enter elements of matrix 2:" << endl;
//     for(i = 0; i < r2; ++i){
//         for(j = 0; j < c2; ++j) 
//                    {cout << "Enter element b" << i + 1 << j + 1 << " : ";
//                    cin >> b[i][j];  
//                    }}
//     // Multiplying matrix a and b and storing in array mult.
//     for(i = 0; i < r1; ++i)
//     {for(j = 0; j < c2; ++j) 
//       {    mult[i][j]=0;
//       for(k = 0; k < c1; ++k)  
//                 {                mult[i][j] += a[i][k] * b[k][j];   
//                          } 
//       }
//       }// Displaying the multiplication of two matrix.
//       cout << endl << "Output Matrix: " << endl;
//       for(i = 0; i < r1; ++i){for(j = 0; j < c2; ++j)
//     {
//         cout << " " << mult[i][j];
//         if (j == c2 - 1)
//             cout << endl;
//     }}
//     return 0;
// }
