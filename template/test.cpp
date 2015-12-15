#include "test.h"
template<class T>   //声明一个类模板，虚拟类型名为T
Compare <T> :: Compare(T a,T b){
   x=a;
   y=b;
}
template<class T> 
T Compare <T> ::max(){
   return(x>y)?x:y;
}
template<class T> 
T Compare <T> :: min(){
   return(x<y)?x:y;
}
 