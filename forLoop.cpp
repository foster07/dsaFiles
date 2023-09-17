// BITWISE OPERATOR:::------>>>

// #include<iostream>
// using namespace std;
// int main() {
//     int a=4;
//     int b=2;
//     cout<<" a & b "<< (a&b) << endl;
//     cout<<" a | b "<< (a|b) << endl;
//     cout<<" ~a  "<< (~a) << endl;
//     cout<<" a ^ b "<< (a^b) << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 0;
//     int b = 1;
//     int sum = 0;
//     int n;
//     cout << "Enter a  num : ";
//     cin >> n;
//     cout << "Fabonacci Series:\n";
//     cout << a << " ";
//     cout << b << " ";
//     for (int i = 0; i <= n; i++)
//     {
//         sum = a + b;
//         cout << sum << " ";
//         a = b;
//         b = sum;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     float a= 5/2;
//     cout<< a ;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<< "enter a num: ";
//     cin>> n;
//     int x=n;
//     int sum =0, product=1;

//     for (; n; n=n/10)
//     {
//         sum+= n%10;
//         product *= n%10;

//     }
//     cout<<" Diff of product and sum of digits of "<< x<< " : "<< product-sum;

// return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Enter a num to find its binary repersentation : ";

//   cin >> n;
//   int a = n, i = 0;

//   float ans = 0;
//   while (n != 0)
//   {
//     int bit = n & 1;
//     n = n >> 1;
//     ans = bit * pow(10, i) + ans;
//     i++;
//   }
//   cout << "Binary repersentation of(" << a << "): " << ans << endl;

//   return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//     float res=0;
//     for (int i = 0; i < 32; i++)
//     {
//       unsigned int a = pow(2,i);
//       res += a;
//     }
//   cout<< " 8bit registor /4 byte int : "<<res;
// return 0;
// }



