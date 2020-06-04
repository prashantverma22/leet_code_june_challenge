#include <iostream>
#include <cstring>
using namespace std;
void reverse(char s[]){
    int low=0;  //pointer for leftmost end
    int high=strlen(s)-1; //pointer for rightmost end
    while(low<high){
        //swap until the string gets revered
        swap(s[low],s[high]);
        low++;
        high--;
    }
}
int main()
{
    char s[100];
    cin>>s;
    reverse(s);
    for(int i=0;i<strlen(s);i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
