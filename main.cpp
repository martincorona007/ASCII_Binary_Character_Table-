#include "file.hpp"
int main() {

    stack k;
    
    KindData c;
    std::cout<<"ASCII - Binary Character Table "<<std::endl;
    	printf("\nLetter  ASCII Code   Binary");
	for(int i=97;i<=122;i++){
		printf("\n  %c\t%i\t\t",i,i);k.n(i);
	}
	printf("\nLetter  ASCII Code   Binary");
 	for(int x=65;x<=90;x++){
		
		printf("\n  %c\t%i\t\t",x,x);k.n(x);
	}
	
	




    return 0;
}
