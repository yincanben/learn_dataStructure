//
//  SeqList.cpp
//  SeqList
//
//  Created by ycb13 on 15/12/14.
//  Copyright © 2015年 ycb13. All rights reserved.
//


#ifndef _SeqList_h
#define _SeqList_h

#include "SeqList.h"
/*template <typename T> SeqList<T>::SeqList(int sz=DefaultSize){
    
}*/

template <typename T>
SeqList<T>::SeqList(int sz)
:m_nmaxsize(sz),m_ncurrentsize(-1){
    if (sz > 0) {
        m_elements = new T[m_nmaxsize] ;
    }
}

template <typename T>
SeqList<T>::~SeqList() {
    delete [] m_elements;
}

template <typename T>
int SeqList<T>::Length() const {
    return m_ncurrentsize+1 ;
}

template <typename T >
int SeqList<T>::Find(T x)  const{
    for (int i=0; i<m_ncurrentsize; i++) {
        if (m_elements[i] == x) {
            return i ;
        }
    }
    cout << "Can't find the element you want to find" << endl ;
    return -1 ;
}

template <typename T>
int SeqList<T>::IsElement(T x) const{
    if (Find(x) == -1) {
        return 0 ;
    }
    return 1;
}

template <typename T>
int SeqList<T>::IsEmpty() {
    return m_ncurrentsize == -1 ;
}

template <typename T>
int SeqList<T>::IsFull() {
    return m_ncurrentsize == m_nmaxsize-1 ;
}

template <typename T>
T SeqList<T>::Get(int i){
    return i<0 || i>m_ncurrentsize?(cout<< "Can't find the element" << endl):m_elements[i] ;
}

template <typename T>
void SeqList<T>::Print() {
    for(int i=0;i<=m_ncurrentsize;i++)
        cout<<i+1<<":\t"<<m_elements[i]<<endl;
    cout<<endl<<endl;
}


template <typename T>
int SeqList<T>::Insert(T x, int i){
    if (i < 0 || i > m_ncurrentsize+1 || m_ncurrentsize == m_nmaxsize-1) {
        cout << "The operation is illegal!" << endl ;
        return 0 ;
    }
    m_ncurrentsize++ ;
    for (int j=m_ncurrentsize; j>i; j--) {
        m_elements[j]=m_elements[j-1] ;
    }
    m_elements[i] = x ;
    return 1 ;
}
template <typename T>
int SeqList<T>::Remove(T x) {
    int size = m_ncurrentsize ;
    for (int i =0 ; i<m_ncurrentsize; i++) {
        if (m_elements[i] == x) {
            for (int j =i; j<m_ncurrentsize; j++) {
                m_elements[j] = m_elements[j+1] ;
            }
            m_ncurrentsize -- ;
            continue ;
        }
    }
    if (size == m_ncurrentsize) {
        cout << "Can't find the element you want to remove" << endl ;
        return 0;
    }
    return 1 ;
}
#endif