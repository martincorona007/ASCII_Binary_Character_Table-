#include "file.hpp"
bool stack::empty() {

    if(top==-1)
        return true;
    else
        return false;
}
bool stack::full() {

    if(top==MAX-1)
        return true;
    else
        return false;

}
void stack::push(KindData aa){
    if(full())
        printf("Full Stack [%i] \n",aa);
    else
        top=top+1;
        V[top]=aa;
   // printf("[%i] .\n",V[top]);
}
KindData stack::Pop() {
    KindData  x;
    if(empty())
        std::cout<<"Empty Stack";
    else
        x=V[top];
        top--;

        //printf(" [%i] ",x);
return x;
}
int stack::n( int x){
  stack v;
    int m;
    int k;
   if(x==0){
    return 1;
   }else{
    k=x%2;
    m=x/2;

    n(m);
   v.push(k);
   // printf(" %i ",m);
    //printf("\n");
    //printf(" [%i]",k);
	
    
   }
	while(!v.empty()){
     	   printf("%i",v.Pop());
   	} 
   return k;
}

