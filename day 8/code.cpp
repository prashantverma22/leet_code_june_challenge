#include <iostream>
using namespace std;
bool powerOfTwo(int n){  // using bit manipulation
    if(n>0 && (n & (n-1)) == 0){
        return true;
    }
    return false;
}
bool power_of_two(int n){  //using recursion
    //base cases:--
    if(n==1){
        return true;
    }
    if(n==0 || n%2 != 0){
        return false;
    }
    //recursive case:
    return power_of_two(n/2);
}
int main() {
    int n;
    cin>>n;
    cout<<powerOfTwo(n)<<endl;
    cout<<power_of_two(n)<<endl;
    return 0;
}
