#include <iostream>
#include <cstring>
using namespace std;
struct B2Tree{
    char data ;
    B2Tree *leftChild ;
    B2Tree *rightChild ;
};
class BinaryTree{
    private:
        int n ;
        int count ;
        B2Tree *data[100];
    public:
        B2Tree *root ;
        BinaryTree(){
            B2Tree *p ;
            char tmp[200];
            int front=0 ;//The node of number
            int Parent = 1 ;
            cout << "Please input the data." <<endl ;
            cin.getline(tmp,100) ;
            count = strlen(tmp) ;
            n = 0 ;
            for(int i = 0 ; i < count ; i++){
                if(tmp[i]!='#'){
                    p=NULL ;
                    if(tmp[i]!=','){
                        n++ ;
                        p = new B2Tree ;
                        p->data = tmp[i] ;
                        p->leftChild=NULL ;
                        p->rightChild=NULL ;
                    }
                    front++;
                    data[front]=p ;
                    if(front==1){
                        root= p;
                    }else{
                        if((p!=NULL)&&(front%2==0)){
                            data[Parent]->leftChild=p ;
                        }
                        if((p!=NULL)&&(front%2==1)){
                            data[Parent]->rightChild=p;
                        }
                        if(front%2 == 1)    Parent++ ;
                    }
                }
            }
        }
        ~BinaryTree(){
            for(int i = 1;i<=n;i++){
                if(data[i]!=NULL)   delete data[i] ;
            }
        }
        void PrintCount(){
            int num ;
            num = n ;
            cout << "The height of binary tree is " << num << endl;
        }
        void PreTraversal(B2Tree *t){
            if(t!=NULL){
                cout << t->data << "," ;
                PreTraversal(t->leftChild) ;
                PreTraversal(t->rightChild);
            }
        }
        void MidTraversal(B2Tree *t){
            if(t!=NULL){
                MidTraversal(t->leftChild) ;
                cout << t->data << "," ;
                MidTraversal(t->rightChild);
            }
        }
        void PosTraversal(B2Tree *t){
            if(t!=NULL){
                PosTraversal(t->leftChild) ;
                PosTraversal(t->rightChild);
                cout << t->data << "," ;
            }
        }
};
int main(int argc, char **argv){
    BinaryTree bt ;
    bt.PrintCount();
    bt.PreTraversal(bt.root);
    cout << endl ;
    bt.MidTraversal(bt.root) ;
    cout << endl ;
    bt.PosTraversal(bt.root) ;
    cout << endl ;
    return 0 ;
}
