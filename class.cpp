// #include <bits/stdc++.h>
// using namespace std;

// class Character{
//     public:
//         string game;
//         int age;
//         int level;

//     // constructors

//     // Character (){
//     //     cout<< "Without parameter costructor invoked"<< endl;
//     // }
//     // Character (int a){
//     //     cout<< "with parameter constructer invoked"<<endl;

//     // }

//     // Character (int age){
//     //     this ->age =age;
//     //     cout<< "Using this keyword, constructor created:"<<endl;
//     // }

//     // Copy constructer:
//     Character(){

//     }
//     Character (Character&neww){
//         // copy constructer : (age level and game ) of neww will we copied to the new object;
//         // for example : Character Rohan(neww) (age level and game ) of neww will we copied to Rohan
//        this->age= neww.age;
//         this->level=neww.level;
//         this->game=neww.game;
//     }

//     // getter function to access the private attribute

//         int getcheat(){
//         return cheat;
//         }
//         int getkd(){
//             return kd;
//         }

//     // setter function to set value to private attributes
//         void setcheat(int n){
//             cheat=n;
//         }
//         void setkd(int n){
//             kd=n;
//         }

//     private:
//         int cheat;
//         int kd;

// };

// int main(){

//     Character franklin;
//     franklin.game="gtaV";
//     franklin.age =40;
//     franklin.level=2;

//     // cout<<sizeof(franklin)<<endl;
//     // using setter function to set value to private attributes
//     franklin.setcheat(3030);
//     franklin.setkd(5);

//     // // using getter function to access the value of private attribute
//     // cout<<"franklin kd: "<<franklin.getkd()<<endl;
//     // cout<< "franklin cheat: "<<franklin.getcheat()<< endl;

//     // //dynamically created class onjects
//     // Character *michal= new Character;
//     // (*michal).game="san And Areas";
//     // (*michal).age=33;
//     // (*michal).level=3;

//     // (*michal).setcheat(9090);
//     // (michal)->setkd(6);   // (*michal).setkd(6) is equal to michal->setkd(6)

//     // cout<< "Michal game: "<< (*michal).game<< endl;
//     // cout<< "Michal age: "<< michal->age<< endl;
//     // cout<< "Michal level: "<<  michal->level << endl;

//     // cout<< "Michal cheat: "<<  michal->getcheat() <<endl;
//     // cout<< "Michal kd: "<< michal->getkd() << endl;

//     // Character Lambu;

//     // Character Motu(34); // 34 is set as age of Motu
//     // cout<< Motu.age << endl;

//     // Character Mario(franklin);
//     // cout<<Mario.age;

//     Character Sunio(franklin);

//     cout << Sunio.age<< endl;
//     cout<< Sunio.level<<endl;
//     cout<< Sunio.game<<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class cartoon{
//     public:

//     int level;
//     string name ;
//     int *ptr = new int;

//     /*

//     In C++, a shallow copy and a deep copy are two different ways of copying objects, particularly when dealing with user-defined
//     classes or structures that contain dynamically allocated memory or pointers

//     The default copy constructor in C++ performs a shallow copy. It copies the values of the members from the source object to the
//     new object. If the members are pointers or objects containing dynamically allocated memory, only the addresses are copied, not
//     the actual data pointed to. This can lead to issues if the source and copied objects end up sharing the same dynamically allocated
//      memory, as changes in one object can affect the other.

//     If you need a deep copy to ensure that the copied object has its own independent resources, you should define your own copy constructor
//     that performs the necessary deep copying of the members.

//     */

//     // If the members of a class are statically allocated (i.e., not pointers or objects containing dynamically allocated memory),
//     // then the default copy constructor will perform a member-wise copy. Each member of the source object will be copied to the
//     // corresponding member of the destination object. This behavior is safe and creates independent copies of the members.

// };
// int main(){

//     cartoon bheem;

//     bheem.level=9;
//     bheem.name="chhota";
//     *(bheem.ptr)=23;

//     cartoon raju(bheem);

//     cout<< raju.name<< " : ";
//     cout<< raju.level<<" "<<*(raju.ptr)<< endl;

//     bheem.name="mini man";
//     bheem.level=34;
//     *(bheem.ptr)=30;

//     cout<< bheem.name<< " : ";
//     cout<< bheem.level<<" "<< *(bheem.ptr)<< endl;

//     cout<< raju.name<< " : ";
//     cout<< raju.level<<" "<<*(raju.ptr)<< endl;

//     cout<< bheem.name<< " : ";
//     cout<< bheem.level<<" "<<*(bheem.ptr) <<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student{
//     public:
//     int roll;
//     int marks;
//     char grade;

//     public:
//     int getroll(){
//         return roll;
//     }
//     int getmarks(){
//         return marks;
//     }
//     void setgrade(){
//         if (marks>90){
//             grade='A';
//         }
//         else{
//             grade='B';
//         }
//     }

// };
// int main(){

//     student ram;
//     ram.marks=80;
//     ram.roll=23;

//     cout<< ram.getmarks()<<endl;
//     cout<< ram.getroll() <<endl;
//     ram.setgrade();
//     cout<< ram.grade <<endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Polynomial
// {

// public:
//     int *degCoeff; // Name of your array (Don't change this)

//     int capacity; // total size

// public:
//     Polynomial()
//     {

//         degCoeff = new int[10]; // Initialize the array with size 10

//         for (int i = 0; i < 10; i++)
//             degCoeff[i] = 0; // Set all coefficients to 0

//         capacity = 10; // Set the initial capacity to 10
//     }

//     // Copy constructor

//     Polynomial(const Polynomial &d)
//     {

//         this->degCoeff = new int[d.capacity];

//         for (int i = 0; i < d.capacity; i++)
//         {

//             this->degCoeff[i] = d.degCoeff[i];
//         }

//         this->capacity = d.capacity;
//     }

//     // Function to set the coefficient of a particular degree

//     void setCoefficient(int deg, int coeff)
//     {

//         if (deg >= capacity)

//         {

//             // int size = this->capacity;

//             int size = deg + 1;

//             int *newarr = new int[size];

//             // Copy the old coefficients to the new array

//             for (int i = 0; i < capacity; i++)
//                 newarr[i] = this->degCoeff[i];

//             // Set the remaining coefficients to 0

//             for (int i = capacity; i < size; i++)
//                 newarr[i] = 0;

//             delete[] this->degCoeff; // Delete the old array

//             this->degCoeff = newarr; // Point to the new array

//             this->capacity = size;
//         }

//         this->degCoeff[deg] = coeff;
//     }

//     // Complete the class

//     // Function to print the polynomial

//     void print()
//     {

//         for (int i = 0; i < capacity; i++)
//         {

//             if (degCoeff[i])

//                 cout << degCoeff[i] << "x" << i << " ";
//         }

//         cout << endl;
//     }

//     // Overloading the + operator to add two polynomials

//     Polynomial operator+(Polynomial &p)
//     {

//         Polynomial newP;

//         newP.capacity = max(p.capacity, capacity);

//         newP.degCoeff = new int[newP.capacity];

//         // Adding the coefficients at corresponding degrees

//         if (capacity < p.capacity)
//         {

//             int k;

//             for (k = 0; k < capacity; k++)
//             {

//                 newP.degCoeff[k] = degCoeff[k] + p.degCoeff[k];
//             }

//             for (; k < p.capacity; k++)
//             {

//                 newP.degCoeff[k] = p.degCoeff[k];
//             }
//         }
//         else
//         {

//             int k;

//             for (k = 0; k < p.capacity; k++)
//             {

//                 newP.degCoeff[k] = degCoeff[k] + p.degCoeff[k];
//             }

//             for (; k < capacity; k++)
//             {

//                 newP.degCoeff[k] = degCoeff[k];
//             }
//         }

//         return newP;
//     }

//     // Overloading the - operator to subtract two polynomials

//     Polynomial operator-(Polynomial &p)
//     {

//         Polynomial newP;

//         newP.capacity = max(capacity, p.capacity);

//         newP.degCoeff = new int[newP.capacity];

//         // Subtracting the coefficients at corresponding degrees

//         if (capacity < p.capacity)
//         {

//             int k;

//             for (k = 0; k < capacity; k++)
//             {

//                 newP.degCoeff[k] = degCoeff[k] - p.degCoeff[k];
//             }

//             for (; k < p.capacity; k++)
//             {

//                 newP.degCoeff[k] = -p.degCoeff[k];
//             }
//         }
//         else
//         {

//             int k;

//             for (k = 0; k < p.capacity; k++)
//             {

//                 newP.degCoeff[k] = degCoeff[k] - p.degCoeff[k];
//             }

//             for (; k < capacity; k++)
//             {

//                 newP.degCoeff[k] = degCoeff[k];
//             }
//         }

//         return newP;
//     }

//     // Overloading the * operator to multiply two polynomials

//     Polynomial operator*(Polynomial const &p)
//     {

//         Polynomial newP;

//         newP.capacity = p.capacity + capacity;

//         newP.degCoeff = new int[newP.capacity];

//         // Initialize all coefficients of the new polynomial to 0

//         for (int i = 0; i < newP.capacity; i++)

//             newP.degCoeff[i] = 0;

//         for (int i = 0; i < capacity; i++)
//         {

//             for (int j = 0; j < p.capacity; j++)
//             {

//                 newP.degCoeff[i + j] += degCoeff[i] * p.degCoeff[j];
//             }
//         }

//         return newP;
//     }

//     Polynomial operator=(Polynomial const &d)
//     {

//         this->degCoeff = new int[d.capacity];

//         for (int i = 0; i < d.capacity; i++)
//         {

//             this->degCoeff[i] = d.degCoeff[i];
//         }

//         this->capacity = d.capacity;

//         return *this;
//     }
// };

// int main(){

    

//     return 0;
// }




// costructor and destructor

// #include <bits/stdc++.h>
// using namespace std;
// class car{
//     public: 
//     car(){
//         cout<<"constructor called !"<<endl;
//     }
//     ~car(){
//         cout<<"destructor called !"<<endl;
//     }
// };
// int main(){

//     car maruti;
//     {
//         car suzuki;
//     }
//     cout<<"inside main"<<endl;
    

//     return 0;
// }




//Inheritence

// #include <bits/stdc++.h>
// using namespace std;
// class Human{
//     public: 
//     int age;
//     int height;

// };

// class Study{
//     public:
//     int roll;
//     string coaching;

// };

// class Male: public Human, public Study {
//     public: 
//     string address;
//     string vill;

// };

// int main(){

//     Male rohit;
//     cout<< rohit.roll<<endl;    

//     return 0;
// }


// scope resolution operator to solve the ambiguity

// #include <bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//     void func(){
//         cout<<"Func of A"<<endl;
//     }
// };

// class B{
//     public:
//     void func(){
//         cout<<"Func of B"<<endl;
//     }
// };

// class C: public A, public B{

// };

// int main(){

//     C obj_c;

//     obj_c.A::func();

//     obj_c.B::func();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class myClass{
//     public:
//     int a;
//     int b;

//     myClass(int a, int b){
//         this->a =a;
//         this->b =b;
//     }
//     int operator+(myClass sec){   // operator overloading
//         int ans = this->a-sec.a;
//         return ans;
       
//     }


// };
// int main(){
//     myClass obj1(8,5);
//     myClass obj2(2,4);

//     int diff =obj1+obj2;
//     cout<< diff<< endl;
    

//     return 0;
// }


// #include <bits/stdc++.h> 
// #include <iostream>
// using namespace std;

// class Car {
//     public:
    
//     int noOfGear;
//     string color;
// };


// class RaceCar: public Car {
//     public:
//     int maxSpeed;
//     RaceCar(int noOfGear,string color,int maxSpeed){
//         this->noOfGear=noOfGear;
//         this->maxSpeed=maxSpeed;
//         this->color=color;
//     }
//     void printInfo(){
//         cout<<"noOfGear: "<<noOfGear<<endl;
//         cout<<"color: "<<color<<endl;
//         cout<<"maxSpeed: "<<maxSpeed<<endl;
//     }
// };


// int main() {
//     int noOfGear, maxSpeed;
//     string color;
//     cin >> noOfGear >> color >> maxSpeed;
//     RaceCar raceCar(noOfGear, color, maxSpeed);
//     raceCar.printInfo();
//     return 0;
// }


//Friend function :: how to use it
#include <bits/stdc++.h>
using namespace std;
class Mobile{
    private:
    int price;
    string model;
    public:
    Mobile(int price, string model){
        this->model=model;
        this->price=price;

    }
    friend void getDetails(Mobile);
};

void getDetails(Mobile m){
    m.price+=500;
    cout<<"model: "<<m.model<<endl<<"price: "<<m.price<<endl;
}
int main(){

    Mobile realme(10000,"realme6");
    Mobile *ptr= &realme;
    cout<< ptr<<endl;
    ptr++;
    cout<< ptr<< endl;
    getDetails(realme);
    // cout<< realme.price;
    return 0;

}
