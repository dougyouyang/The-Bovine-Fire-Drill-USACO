//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int c(int i)
{
    while(i>2){
        i/=2;
        if(i%2==1){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i=1;
    
    cin >> n;
    
    if(n%2==1){
        cout << n/2+1 << endl;
        return 0;
    }
    if(c(n)){
        cout << n << endl;
        return 0;
    }
    while(1==1){
        bool re=false;
        if(i+i>n)
            re=true;
        if(re && c((i+i)%n)){
            cout << i << endl;
            return 0;
        }
        i=(i+i)%n;
    }
    
    return 0;
}
