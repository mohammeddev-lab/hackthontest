// // #include <iostream>
// // using namespace std;
// // class MyClass {
// // private:
// //     int value;
// // public:
// //     void setValue(int value) {
// //         this->value = value;        
// //         cout << "\n Output 1 is " << this->value;
// //         cout << "\n Output 2 is " << this;
// //     }
// // };
// // int main()
// // {
// //     MyClass obj;
// //     obj.setValue(10); 
// // }

// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     int numbers[] = {10, 20, 30, 40, 50};

// // //     cout << "The output of the element in the array is: ";
// // //     cout << *(numbers + 2) << endl;

// // //     return 0;
// // // }


// // // #include <iostream>
// // // using namespace std;

// // // class Counter {
// // // private:
// // //     int count;

// // // public:
// // //     Counter() { count = 0; }
// // //     void increment() { count++; }
// // //     void display() { cout << count << endl; }
// // // };

// // // int main() {
// // //     Counter c;
// // //     c.increment();
// // //     c.display();
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int x = 10;
// //     double y = 5.5;
// //     void* ptr;
// //     ptr = &x;
// //     cout << "Value of x: " << *(int*)ptr << endl;
// //     ptr = nullptr;
// //     if(ptr != nullptr) {
// //         cout << "Value of y: " << *(double*)ptr << endl;
// //     } else {
// //         cout << "Value of y: " << "Nothing" << endl;  // prints empty
// //     }
// //     return 0;
// // }



// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int a = 3, b = 4;
// //     int c = a++ + ++b * a;
// //     cout << a << " " << b << " " << c;
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // bool check(int x, int y){
// //     return x < y < 10;
// // }
// // int main(){
// //     cout << check(3,5) << endl;
// //     cout << check(8,2) << endl;
// // }
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s = "ABCDE";
//     for(int i=0;i<s.length();i++){
//         cout << s[i];
//         if(i%2==0)
//             s.push_back('X');
//     }
// }


#include <iostream>
using namespace std;
int main() {
    int x = 50;
    int *p = &x; // Point to valid memory address
    cout << *p;
    return 0;
}