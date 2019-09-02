#include <iostream>
using namespace std; 
int stack[100], n,i,top=-1;
void push(int val) {
   if(top==n-1)
     { cout<<"Stack Overflow"<<endl; 
	 }
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<0)
     { cout<<"Stack Underflow"<<endl;
	 }
   else 
     { cout<<"The popped element is "<< stack[top] <<endl;
      top--;
  }
    
}
void puts() {
   if(top!=-1)
     { cout<<"Stack elements are:";
      for(i=0;i<=top;i++)
        { cout<<stack[i]<<" ";
         cout<<endl;
	 }
 }
	 
   else
     { cout<<"Stack is empty"<<endl;
}
}
int main() {
   int ch, val; 
   cout<<"1) Push"<<endl;
   cout<<"2) Pop "<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   cout<<"give a limit for the stack";
   cin>>n;
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
