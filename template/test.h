

template<class T>   //声明一个类模板，虚拟类型名为T
class Compare
{
 public:
  Compare(T a,T b) ;
  T max() ;
  T min() ;
 private:
  T x,y;
}; 

template<class T>   //声明一个类模板，虚拟类型名为T
Compare <T> :: Compare(T a,T b){
   x=a;
   y=b;
}
template<class T> 
T Compare <T> ::max(){
   return(x>y)?x:y;
}
template<class T> 
T Compare <T> :: min(){
   return(x<y)?x:y;
}
 

/*
template<class T>   //声明一个类模板，虚拟类型名为T
class Compare
{
 public:
  Compare(T a,T b)
  {
   x=a;
   y=b;
  }
  T max()
  {
   return(x>y)?x:y;
  }
  T min()
  {
   return(x<y)?x:y;
  }
 private:
  T x,y;
}; 
 */