/***** ****
 * Factorial of a number 
 * ********************************/
#include<iostream>
using namespace std;
int calcFactorial(int *);
int main(){
    int range,*ptr_range, temp ;
    cout << "Enter a range: ";
    cin >> range;
    cout << "Factorial upto " << range << " are: " << "\n";
     for(int i=1,j=0; i<=range+1; i++,j++){
        temp = i;
        ptr_range = &temp;
        cout  <<"Factorial of "<<j <<" = " << calcFactorial(ptr_range) << endl;
    }
    
    return 0;
}
int  calcFactorial(int *n){
    if(*n==1 || *n == 0){
        return 1;
    }
     *n = *n-1;
     return *n *calcFactorial(n) ;
     
   
    
    
}