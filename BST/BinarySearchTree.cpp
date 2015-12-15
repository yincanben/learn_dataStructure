#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "BinarySearchTreee.h"
//BST
using namespace std;
int main(int argc,char **argv){
    int NodeNum = 20 ;
    srand(time(0));
    int intArray[]={21,23,16,64,0,57,93,10,77,30,80,46,72,40,96,90,95,61,25,19};
    cout << "Insert order:" << endl ;
    for(int i = 0 ; i < NodeNum ; i++){
        cout << intArray[i] << " " ;
    }
    cout << endl ;
    BinarySearchTree<int> tree(intArray,NodeNum) ;
}
