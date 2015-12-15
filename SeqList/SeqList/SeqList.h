//
//  SeqList.h
//  SeqList
//
//  Created by ycb13 on 15/12/14.
//  Copyright © 2015年 ycb13. All rights reserved.
//

#ifndef SeqList_h
#define SeqList_h

//#include <stdio.h>

#include <iostream>
using namespace std;


const int DefaultSize = 100;

template <typename T>
class SeqList {
    
public:
    SeqList(int sz=DefaultSize);
    ~SeqList();
    int Find(T x) const ;
    int IsElement(T x) const ;
    int Insert(T x, int i) ;
    int Remove(T x) ;
    int IsEmpty() ;
    int IsFull();
    int Length() const ;
    T Get(int i) ;
    void Print() ;
private:
    T *m_elements ;
    const int m_nmaxsize ;
    int m_ncurrentsize ;
};


#endif /* SeqList_h */
