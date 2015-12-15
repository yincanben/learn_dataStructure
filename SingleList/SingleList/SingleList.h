//
//  SingleList.h
//  SingleList
//
//  Created by ycb13 on 15/12/15.
//  Copyright © 2015年 ycb13. All rights reserved.
//

#ifndef SingleList_h
#define SingleList_h
#include "SingleNode.h"
#include <cstdlib>
#include <iostream>
using namespace std ;

template <typename T>
class SingleList {
    
public:
    SingleList():head(new ListNode<T>()){}
    ~SingleList(){
        MakeEmpty() ;
        delete head ;
    }
    
public:
    void MakeEmpty();
    int Length();
    ListNode<T> *Find(T value, int n) ;
    ListNode<T> *Find(int n) ;
    bool Insert(T item, int n =0 ) ;
    T Remove(int n=0) ;
    bool RemoveAll(T item) ;
    T Get(int n) ;
    void Print();
    
private:
    ListNode<T> *head ;
    //ListNode<T> *current ;
};

template <typename T>
void SingleList<T>::MakeEmpty() {
    ListNode<T> *p_del ;
    while (head->p_next != NULL) {
        p_del = head->p_next ;
        head->p_next = p_del->p_next ;
        delete p_del ;
    }
}

template <typename T>
int SingleList<T>::Length() {
    ListNode<T> *pmove = head->p_next ;
    int count = 0 ;
    while (pmove != NULL) {
        pmove = pmove->p_next ;
        count ++ ;
    }
    
    return count ;
}

template <typename T>
ListNode<T>* SingleList<T>::Find(int n) {
    if (n < 0) {
        cout << "The n is out of boundary" << endl ;
        return NULL ;
    }
    ListNode<T> *pmove = head->p_next ;
    for(int i=0 ; i<n&&pmove; i++){
        pmove = pmove->p_next ;
    }
    if (pmove == NULL) {
        cout << "The n is out of boundary" << endl ;
        return NULL ;
    }
    
    return pmove ;
}

template <typename T>
ListNode<T>* SingleList<T>::Find(T value, int n) {
    if (n < 1) {
        cout << "The n is illegal" << endl ;
        return NULL ;
    }
    ListNode<T> *pmove = head ;
    int count = 0 ;
    while (count!=n && pmove) {
        pmove = pmove->p_next ;
        if (pmove->m_data == value) {
            count++;
        }
    }
    if (pmove == NULL) {
        cout << "Can't find the element" << endl ;
        return NULL ;
    }
    return pmove ;
}

template <typename T>
bool SingleList<T>::Insert(T item , int n) {
    //cout << "n = " << n << endl ;
    
    if (n < 0) {
        cout << "The n is illegal" << endl ;
        return 0 ;
    }
    ListNode<T> *pmove = head ;
    ListNode<T> *pnode = new ListNode<T>(item) ;
    if (pnode == NULL) {
        cout << "Applicationn error !" << endl ;
        return 0 ;
    }
    //cout << "n = " << n << endl ;
    
    for (int i=0 ; i<n &&pmove; i++) {
        pmove = pmove->p_next ;
    }
    if (pnode == NULL) {
        cout << "the n is illegal" << endl ;
        return 0 ;
    }
    //cout << "n = " << n << endl ;
    /*if (n==0 && pmove) {
        head->p_next = pnode ;
        current = head->p_next ;
    }else if(n > 0 && pmove){
        current->p_next = pnode ;
        current = current->p_next ;
    }else{*/
    pnode->p_next = pmove->p_next ;
    pmove->p_next = pnode ;

    
    /*
    pnode->p_next = pmove->p_next ;
    pmove->p_next = pnode ;
    */
    return 1 ;
     
}

template<typename T> bool SingleList<T>::RemoveAll(T item){
    ListNode<T> *pmove=head;
    ListNode<T> *pdel=head->p_next;
    while(pdel!=NULL){
        if(pdel->m_data==item){
            pmove->p_next=pdel->p_next;
            delete pdel;
            pdel=pmove->p_next;
            continue;
        }
        pmove=pmove->p_next;
        pdel=pdel->p_next;
    }
    return 1;
}

template <typename T>
T SingleList<T>::Remove(int n) {
    if (n < 0) {
        cout << "Can't find the element" << endl ;
        exit(1) ;
    }
    ListNode<T> * pmove = head , *pdel ;
    for (int i=0; i<n&&pmove; i++) {
        pmove = pmove->p_next ;
    }
    if (pmove->p_next == NULL) {
        cout << " Can't find the element" << endl ;
        exit(1) ;
    }
    pdel = pmove->p_next ;
    pmove->p_next = pdel->p_next ;
    T temp = pdel->m_data ;
    delete pdel ;
    return temp ;
}

template <typename T>
T SingleList<T>::Get(int n) {
    if (n < 0) {
        cout << "The n is out of boundary" << endl ;
        exit(1) ;
    }
    ListNode<T> *pmove = head->p_next ;
    for (int i=0; i<n && pmove; i++) {
        pmove = pmove->p_next ;
        if (NULL == pmove) {
            cout << "The n is out of boundary" << endl ;
            exit(1) ;
        }
    }
    return pmove->m_data ;
}

template <typename T>
void  SingleList<T>::Print() {
    ListNode<T> *pmove = head->p_next ;
    cout << "head = " ;
    while (pmove) {
        cout << "---> " << pmove->m_data;
        pmove = pmove->p_next ;
    }
    cout << "--->over" << endl << endl ;
}


#endif /* SingleList_h */
