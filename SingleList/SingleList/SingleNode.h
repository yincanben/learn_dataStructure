//
//  SingleNode.h
//  SingleList
//
//  Created by ycb13 on 15/12/15.
//  Copyright © 2015年 ycb13. All rights reserved.
//

#ifndef SingleNode_h
#define SingleNode_h

template<typename T> class SingleList ;

template <class T>
class ListNode ;

template <typename T>
ostream& operator << (ostream& os , const ListNode<T> & out) ;


template <typename T>
class ListNode {
private:
    friend class SingleList<T> ;
    ListNode():p_next(NULL) {}
    ListNode(const T item, ListNode<T> *next = NULL):m_data(item),p_next(next){}
    ~ListNode(){
        p_next = NULL ;
    }
public:
    T GetData() ;
    friend ostream& operator << <>(ostream& os, const ListNode<T>& out) ;
private:
    T m_data ;
    ListNode *p_next ;
};

template <typename T>
T ListNode<T>::GetData() {
    return this->m_data ;
}

template <typename T>
ostream& operator<< (ostream& os, const ListNode<T>& out){
    os << out.m_data << endl ;
    return os;
}


#endif /* SingleNode_h */
