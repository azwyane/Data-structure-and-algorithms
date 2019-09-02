#include <iostream>
using namespace std; 
int queue[100], size,i,r=-1,f=-1;
void push(int val) {
   if(r==size-1)
     { cout<<"queue Overflow"<<endl; 
	 }
   else {
      r++;
      queue[r]=val;
   }
}
void pop() {
   if((f==-1 && r==-1) || f>r)
     { cout<<"queue Underflow"<<endl;
	 }
   else 
     { cout<<"The popped element is "<< queue[f+1] <<endl;
      f++;
  }
    
}
void puts() {
   if((f==-1 && r==-1) || f>r)
     { cout<<"queue is empty"<<endl;
	
 }
	 
   else
     { 	 cout<<"queue elements are:"<<endl;
      for(i=f+1;i<=r;i++)
        { cout<<queue[i]<<" ";
         cout<<endl;
	 }
}
}
int main() {
   int ch, val; 
   cout<<"1) enque/push"<<endl;
   cout<<"2) deque/pop "<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   cout<<"give a limit for the stack";
   cin>>size;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {   
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            puts();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}
