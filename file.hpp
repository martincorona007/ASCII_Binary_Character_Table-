#ifndef FILE_HPP
#define FILE_HPP
#include <iostream>
#include <stdio.h>
#define MAX 15
typedef  int KindData;
class stack{

    private:

    public:
       	int top=-1;
        KindData V[MAX];
		
	bool empty();
	bool full();
	KindData Pop();
	void push(KindData);
	int n(int);
};
#endif //FILE_HPP
