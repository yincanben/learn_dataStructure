#include "Compare.h"

Compare::Compare( int a, int b){
	x = a ;
	y = b ;
}

Compare::~Compare(){}

int Compare::max(){
	return (x>y)?x:y ;
}


int Compare::min(){
	return (x<y)?x:y ;
}