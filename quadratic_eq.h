#define discriminant(a,b,c) (((double)(b)*(b))-(((double)(4)*(a)*(c))))
#define NUM_OF_ROOTS(a,b,c) (discriminant(a,b,c) > 0) ? 2 : (discriminant(a,b,c) == 0) ? 1 : 0
#define ROOT1(a,b,c) -((double)(b)+sqrt(discriminant(a,b,c)))/((2)*(a))
#define ROOT2(a,b,c) -((double)(b)-sqrt(discriminant(a,b,c)))/((2)*(a))
#define EXTREME_POINT(a,b,c) -((double)(b))/((2)*(a))
#define MAXIMUM_POINT(a,b,c) (((2)*(a))<0) ? 1 : 0