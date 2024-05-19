double(*(*function(const char* str))(int, void(*)(int, float)))(int[], unsigned int);

typedef void(*a)(int, float);
double(*(*function(const char* str))(int, a))(int[], unsigned int);

typedef double(*b)(int[], unsigned int);
b(*function(const char*))(int, a);

typedef b(*c)(int, a);
c function(const char*);