#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverse (vector<int> &arr ){
    // here we use two pointer approch   
    int s = 0 ;
    int e = arr.size() - 1;

    while(s<=e){

        swap(arr[s] , arr[e]);
            s++;
            e--; 

    }
}

void print (vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i]<<" ";
    }
}

int main()
{
    vector<int>arr={1,2,3,4,5};

    reverse (arr);
    print (arr);

    return 0;
}
