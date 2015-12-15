//
//  main.cpp
//  SeqList
//
//  Created by ycb13 on 15/12/14.
//  Copyright © 2015年 ycb13. All rights reserved.
//

#include <iostream>
using namespace std; 
#include "SeqList.h"
#include "SeqList.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    //cout << "Hello, World!\n";
    SeqList<int> test(15) ;
    int array[15]={2,5,8,1,9,9,7,6,4,3,2,9,7,7,9};
    for (int i=0; i<15; i++) {
        test.Insert(array[i], 0) ;
    }
    test.Print();
   
    test.Insert(1,0);
    cout<<(test.Find(0)?"can't be found ":"Be found ")<< 0 << endl<<endl;
    test.Remove(7);
    test.Print();
    test.Remove(9);
    test.Print();
    test.Remove(0);
    test.Print();
    return 0;
}
