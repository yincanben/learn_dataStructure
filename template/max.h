#ifndef _compare_h
#define _compare_h
template <typename T>
class Compare
{
public:
	Compare(T a, T b);
	~Compare();
	T max() ;
	T min() ;
private:
	T x ;
	T y ;
	
};
#endif
