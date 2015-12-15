/*************************************************************************************
 * author: yincanben
 * mail: yincanben@163.com
 * date:2015-4-4
 * function:
 * **********************************************************************************/
#include <iostream>
using namespace std;
template <class T>
T fun( T x){
    if(x == 1){
        return 1;
    }else{
        return x*fun(x-1) ;
    }
}
int main(int argc, char**argv){
    int result = 0 ;
    int n = 0  ;
    cin >> n ;
    result = fun(n) ;
    cout << "result = " << result << endl ;
    return 0;
}
