// #include<iostream>
// using namespace std;
// int main() {
// int i;
// cin >> i;
// int n=1;
// while (n<=i)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout << "*";
//         j++;
//     }
//     cout<<endl;
//     n++;
// }

// int i;
// cin >> i;
// int n=1;
// while (n<=i)
// {
//     int j=1;
//     while (j<=i)
//     {
//         cout << n;
//         j++;
//     }
//     cout<<endl;
//     n++;
// }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// int a;
// cin >> a;
// int i = 1;
// while (i <= a)
// {
//     int j = 1;
//     while (j <= a)
//     {
//         cout << j;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// int a;
// cin >> a;
// int i = 1;
// while (i <= a)
// {
//     int j = a;
//     while (j > 0)
//     {
//         cout << j;
//         j--;
//     }
//     cout << endl;
//     i++;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int row=1;
//     while (row<=n )
//     {
//        int col=1;
//         while (col<=row)
//         {
//         cout<< "*";
//         col++;
//         }
//         cout<< endl;
//         row++;

//     }

// return 0;
// }

#include <iostream>
using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int row=1;
//     while (row<=n )
//     {
//        int col=1;
//         while (col<=row)
//         {
//         cout<< row;
//         col++;
//         }
//         cout<< endl;
//         row++;

//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col <=row)
//         {
//             cout<< count <<" ";
//             col++;
//             count++;
//         }
//         cout<<endl;

//         row++;

//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row, value;
//     row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         int value = row;
//         while (col <= row)
//         {
//             cout << value;
//             col++, value++;
//         }
//         row++;
//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         // int val=row;
//         while (col<=row)
//         {
//             cout << row-col +1;
//             // cout<<val;
//             // val--;
//             col++;
//         }
//         row++;
//         cout<<endl;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     char a='A';
//     while (row <= n)
//     {
//         int col=1;

//         while (col<=n)
//         {
//             cout << a<<" ";
//             col++;

//         }
//         a= a+1;
//         cout<< endl;
//         row++;
//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             cout<< char ('A' + row + col -2 );
//             col++;

//                 }
//     cout<<endl;
//     row++;
//     }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     char i='A';
//     while (row <= n)
//     {

//         int col = 1;
//         while (col <= n)
//         {
//             // cout<< char('A'+row+col-2);
//             cout<<i;
//             col++;
//             i++;
//         }
//         cout<<endl;
//         i--;
//         row++;

//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;
//     int row =1;
//     while (row <=n)
//     {
//         int space= n-row;

//         while (space)
//         {
//             cout<< " ";
//             space--;
//         }
//         int col=1;
//         while (col<=row)
//         {
//             cout<< col;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = n - row;
//         int val = row - 1;

//         while (space)
//         {
//             cout << "  ";
//             space--;
//         }

//         int col = 1;
//         while (col <= (2 * row) - 1)
//         {
//             if (col <= row)
//             {
//                 cout << col<<" ";
//                 col++;
//             }

//             else
//             {
//                 cout << val << " ";
//                 val--;
//                 col++;
//             }
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;
//     int row =1;
//     while (row <=n)
//     {
//         int space=n-row;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }
//         int col=1;
//         while (col<=row)
//         {
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;

//     }

// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << char('A' + row - 1);
//             col++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     char start = 'A';
//     while (row <= n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             cout << start << " ";
//             col++;
//             start++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;
//     int row =1;
//     while (row<=n)
//     {
//         char start=('A'+n-row);
//         int col=1;
//         while (col<=row)
//         {
//             cout<< start;
//             start++;
//             col++;
//         }
//         cout << endl;
//         row++;

//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;
//     int row =1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=n-row+1)
//         {
//             cout<< "*";
//             col++;
//         }
//         cout << endl;
//         row++;

//     }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;
//     int row =1;
//     while (row<=n)
//     {
//         int space=row-1;
//         while (space)
//         {
//             cout<<" ";
//             space--;
//         }

//       int col=1;
//       while (col<=n-row+1)
//       {
//         cout<<"*";
//         col++;
//       }
//       cout<<endl;
//       row++;

//     }

// return 0;
// }

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = row - 1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }

//         int col = 1;
//         while (col <= n - row + 1)
//         {
//             cout << row;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }

//         int col = 1;
//         while (col <= row)
//         {
//             cout << row;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }


// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int space = row-1;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         int val=row;
//         int col = 1;
//         while (col <= n-row+1)
//         {
//             cout << val;
//             val++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }


// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     int val=1;
//     while (row <= n)
//     {
//         int space = n - row;
//         while (space)
//         {
//             cout << "  ";
//             space--;
//         }

//         int col = 1;
//         while (col <= row)
//         {
//             cout << val<<" ";
//             col++;
//             val++;
//         }
//         cout << endl;
//         row++;
//     }

//     return 0;
// }

