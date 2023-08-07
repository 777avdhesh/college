#include<iostream>
using namespace std;
// multiply of two numbers 
// int main(){
//                     int a,b;
//                     cout<<"enter the value of a and b"<<endl;
//                     cin>>a>>b;
//                     int mul=a*b;
//                     cout<<"a*b = "<<mul;
// }

//--find parameter of triangle 
// int main(){
//                     int a,b,c;
//                     cout<<"enter the sides of triangle"<<endl;
//                     cin>>a>>b>>c;
//                     cout<<"parameter of triangle is "<<(a+b+c);
// }

//----find simple interest --
// int main(){
//                     int price,rate,time;
//                     cout<<"enter price,rate ,time"<<endl;
//                     cin>>price>>rate>>time;
//                     cout<<"simple interest = ₹"<<(price*rate*time)/100;
// }

//---print count from n to 1
// int main(){
//                     int n;
//                     cout<<"enter the value of n "<<endl;
//                     cin>>n;
//                     for(int i=0; i<n; i++){
//                              cout<<n-i<<" ";           
//                     }
// }

//---factorial of a number 
// int main(){
//                     int n;
//                     cout<<"enter the number ";
//                     cin>>n;
//                     int fact=1;
//                     for(int i=1; i<=n; i++){
//                        fact=fact*i;
//                     }
//                     cout<<"Factorail of "<<n<<" is "<<fact<<endl;
// }

//-----num is prime or not 
// int main(){
//                     int n;
//                     cout<<"enter num "<<endl;
//                     cin>>n;
//                     bool isprime=true ;
//                     if(n==1){
//                                         cout<<"not prime";
//                     }    
//                     else{
//                                         for(int i=2; i<n; i++){
//                                      if(n%i==0){
//                                         isprime=false;
//                                         break;
//                                      }
//                                         }
//                                         if(isprime){
//                                                             cout<<"prime";
//                                         }
//                                         else{
//                                                             cout<<"not prime";
//                                         }
//                     }
// }


//----check given triagle is valid or not 
// int main(){
//                     int a,b,c;
//                     cout<<"enter the sides of triagle"<<endl;
//                     cin>>a>>b>>c;
//                     if((a+b>c) && (a+c>b) && (b+c>a) ) {
//                                         cout<<"it's valid triangle";
//                     }

//                     else{
//                                         cout<<"it's not a valid triangle";
//                     }
// }

// -----Print only even numbers 
// int main(){
//                     int n;
//                     cout<<"enter the value of n"<<endl;
//                     cin>>n;
//                     for(int i=1; i<=n; i++){
//                                         if(i%2==0){
//                                                             cout<<i<<" ";
//                                         }
//                     }
// }

//---print maximum of  three numbers 
int main(){
                    int a,b,c;
                    cout<<"enter a, b, c"<<endl;
                    cin>>a>>b>>c;
                    if((a>b) && (a>c)){
                                        cout<<"maximum num is a "<<a;
                    }
                   else  if((b>a) && (b>c)){
                                        cout<<"maximum num is b "<<b;
                    }
                    else {
                                  cout<<"maximum num is c "<<c;      
                    }
}