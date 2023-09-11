#include <iostream> 
using namespace std;

int main()
{

    char someString[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    char* psomeString = someString; 

    cout << "someString = " << psomeString << endl; 
    
    char *plocation3 = &someString[3];
    char *plocation0 = &someString[0];

    cout << "plocation3 = " << plocation3 << endl; 
    cout << "plocation0 = " << plocation0 << endl;     
    cout << "Difference = " << plocation3 - plocation0 << endl; 
    
    
    
    
    
    
    
     //int someArray[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };
    
    //int* plocation0 = &someArray[0];

   // for (int i = 0; i < 10; i++) {
        //cout << "\n" << SomeArray +i << " = " << *SomeArray +i <<  endl;
     //   cout << plocation0 +i << " = " << *plocation0 +i << endl;
    



    

    //cout << *plocation0 << plocation0 << endl;

    //cout << "plocation6: " << plocation6 << endl;
    //cout << "plocation0: " << plocation0 << endl; 

    //int theDiff = plocation0 - plocation6; 

    //cout << "\n the differences: " << theDiff; 


    cout << endl; 

    system("pause");
    return 0; 
}