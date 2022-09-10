#include<iostream>
using namespace std;
int main()
{
    char value;
    char again;
    start:
    cout<<" Welcome to our calculator application "<<endl;
    cout<<" Please follow the instructions "<<endl;
    cout<<" Please press a for addition "<<endl;
    cout<<" Please press s for subtraction"<<endl;
    cout<<" Please press m for multiplication "<<endl;
    cout<<" Please press d for division"<<endl;
    cout<<" Please press o for modulo "<<endl;
    int addition(void);
    int multiplication(void);
    int subtraction(void);
    int division(void);
    int modulo(void);
    cin>> value;
    if(value == 'a'|| value =='A'){
    int addValue = addition();
    cout<<" Addition is "<<addValue<<endl;
    cout<<" Do you want to use our application again"<<endl;
    addAgain:
    cin>>again;
    if(again == 'y'|| again == 'Y'){
        goto start;
    }
    else if(again == 'n'|| again =='N'){
        cout<<" Thanks for using our application"<<endl;
    }
    else{ 
    cout<<" You have entered wrong choice please select y or n "<<endl;
    goto addAgain;
    }
    }
    
    else if(value == 'm'|| value =='M'){
    int mulValue = multiplication();
    cout<<" Multiplication is "<<mulValue<<endl;
    cout<<" Do you want to use our application again"<<endl;
    mulAgain:
    cin>>again;
    if(again == 'y'|| again == 'Y'){
        goto start;
    }
    else if(again == 'n'|| again =='N'){
        cout<<" Thanks for using our application"<<endl;
    }
    else{ 
    cout<<" You have entered wrong choice please select y or n "<<endl;
    goto mulAgain;
    }
    }
    else if(value == 's'|| value =='S'){
    int subValue = subtraction();
    cout<<" Subtraction is "<<subValue<<endl;
    cout<<" Do you want to use our application again"<<endl;
    subAgain:
    cin>>again;
    if(again == 'y'|| again == 'Y'){
        goto start;
    }
    else if(again == 'n'|| again =='N'){
        cout<<" Thanks for using our application"<<endl;
    }
    else{ 
    cout<<" You have entered wrong choice please select y or n "<<endl;
    goto subAgain;
    }
    }
    else if(value == 'd'|| value =='D'){
    int divValue = division();
    cout<<" Division is "<<divValue<<endl;
    cout<<" Do you want to use our application again"<<endl;
    divAgain:
    cin>>again;
    if(again == 'y'|| again == 'Y'){
        goto start;
    }
    else if(again == 'n'|| again =='N'){
        cout<<" Thanks for using our application"<<endl;
    }
    else{ 
    cout<<" You have entered wrong choice please select y or n "<<endl;
    goto divAgain;
    }
    }
    else if(value == 'o'|| value =='O'){
    int modValue = modulo();
    cout<<" Modulo is "<<modValue<<endl;
    cout<<" Do you want to use our application again"<<endl;
    modAgain:
    cin>>again;
    if(again == 'y'|| again == 'Y'){
        goto start;
    }
    else if(again == 'n'|| again =='N'){
        cout<<" Thanks for using our application"<<endl;
    }
    else{ 
    cout<<" You have entered wrong choice please select y or n "<<endl;
    goto modAgain;
    }
    }
}
// Addition Operations
int addition(){
    int a=0;
    int total=0;
    char choice;
    add:
    cout<<" Enter a number"<<endl;
    cin>>a;
    total=total+a;
    cout<<" Do you want to add more numbers , y or n ? "<<endl;
    addAgain:
    cin>>choice;
    if(choice == 'y'|| choice =='Y'){
        goto add;
    }
    else if(choice == 'n'|| choice =='N'){
    return total;
    }
    else{
        cout<<" You have entered wrong choice please select y or n"<<endl;
        goto addAgain;
    }
}
// Multiplication Operations
int multiplication(){
    int a;
    int total=1;
    char choice;
    mul:
    cout<<" Enter a number"<<endl;
    cin>>a;
    total=total*a;
    cout<<" Do you want to multiply more numbers , y or n ? "<<endl;
    mulAgain:
    cin>>choice;
    if(choice == 'y'|| choice =='Y'){
        goto mul;
    }
    else if(choice == 'n'|| choice =='N'){
        return total;
    }
    else{
        cout<<" You have entered wrong choice please select y or n"<<endl;
        goto mulAgain;
    }
    return total;
}
// Subtraction Operations
int subtraction(){
    int a,b;
    int total=0;
    char choice;
    sub:
    cout<<" Enter two numbers "<<endl;
    cin>>a>>b;
    if(a>b){
    total=a-b;
    }
    else{
        total = b-a;
    
    }
    
    return total;
}
// Division Operations
int division(){
    int a,b;
    int total=0;
    char choice;
    division:
    cout<<" Enter two numbers "<<endl;
    cin>>a>>b;
    if(a>b){
    total=a/b;
    }
    else{
        total = b/a;
    
    }
    
    return total;
}
// Modulo Operations
int modulo(){
    int a,b;
    int total=0;
    char choice;
    division:
    cout<<" Enter two numbers "<<endl;
    cin>>a>>b;
    if(a>b){
    total=a%b;
    }
    else{
        total = b%a;
    
    }
    
    return total;
}

