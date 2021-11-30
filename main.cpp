#include "std_lib_facilities.h"	

//We can declare a non-reference function argument. 

//That means that we are passing a constant variable to a function.

//This might be useful if we want to use the value of the constant variable to print something based on it, for example. Or even if we want to use that value to alter
//a global variable or an object field.

//It is not very often used because, if we pass an 'int a' to a function, we normally want to use that variable value for some task, which means that we do not want
//to change its value inside of the function. If we pass a 'const int a', we will not be able to modify the variable 'a' inside that function. So, technically, it ends up
//being the same thing. It would not matter if we pass 'int a' or 'const int a' in this case because we usually do not modify those values anyways.

//Prototype functions here
int addition(const int a, const int b);
void print_b(const int a, const int b);
int subtraction(const int a, const int b);


int main()
try
{
    //declare variables here
    int a=5;
    int b=3;
    int result=0;
    //print the values of a and b
    cout << "As default, a=5 and b=3. \n";
    //add a and b and print result
    result=addition(a,b);
    cout << "The result of the addition of " << a << " and " << b << " == " << result << '\n';
    //print 'b' a times
    cout << "Printing 'b' a times. \n";
    print_b(a,b);
    //subtract a-b and print result
    result=subtraction(a,b);
    cout << "\nThe result of the subtraction of " << a << " - " << b << " == " << result << '\n';
}
//produce error messages
catch (runtime_error e) {
	cout << e.what() << '\n';
	keep_window_open("~");
}
//function to add a and b values
int addition(const int a, const int b){
    //res gets a + b
    int res=a+b;
    //return res
    return res;
}
//function to print 'b' a times
void print_b(const int a, const int b){
    //for loop to print 'b' a times
    for (int i=0; i<a; i++){
        //print b
        cout << b << " ";
    }
    //return
    return;
}
//function to subtract a-b
int subtraction(const int a, const int b){
    //res gets a - b
    int res=a-b;
    //return res
    return res;
}