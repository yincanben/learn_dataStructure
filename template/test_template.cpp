#include<iostream>
using namespace std;
#include "test.h"
int main()
{
 Compare <int> cmp1(3,7);  //定义对象cmp1，用于两个整数的比较
 cout<<"Max : "<<cmp1.max()<<endl;
 cout<<"Min : "<<cmp1.min()<<endl<<endl;
  Compare <float> cmp2(45.89,88.76);//定义对象cmp2，用于两个浮点数的比较
 cout<<"Max : "<<cmp2.max()<<endl;
 cout<<"Min : "<<cmp2.min()<<endl;
 Compare <char> cmp3('a','A'); //定义对象cmp3,用于两个字符的比较
 cout<<"Max : "<<cmp3.max()<<endl;
 cout<<"Min : "<<cmp3.min()<<endl;
 return 0; 
}