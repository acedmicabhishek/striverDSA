#include <iostream>
using namespace std;

int main(){
int arr[]= {1,2,3,4,5,55};
int max = arr[0];

for(int i=1;i<6;i++){

    if(arr[i]>max){
        max = arr[i];
    }
}
cout << max;




    return 0;
}