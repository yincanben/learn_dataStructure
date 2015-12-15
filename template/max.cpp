#include "max.h"
template <typename T>
Compare<T>::Compare( T a, T b){
	x = a ;
	y = b ;
}

template <typename T>
Compare<T>::~Compare(){}

template <typename T>
T Compare<T>::max(){
	return (x>y)?x:y ;
}


template <typename T>
T Compare<T>::min(){
	return (x<y)?x:y ;
}

