
/*
1. Addition, subtraction, multiplication, division
2. square root, factorial, exponential, raising to any power, any n-th root
3. trigonometrical functions in degrees or radians 
4. random numbers

*/

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib> 
#include <ctime> 


using namespace std;


const double PI = 3.141592653589793;

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int display_info()
{
    int choice;
    
    cout<<"The available operations are given below. Choose the one you want to carry out "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Factorial"<<endl;
    cout<<"6. Square root"<<endl;
    cout<<"7. Exponential value and pi value"<<endl;
    cout<<"8. Raising to any power"<<endl;
    cout<<"9. Any n-th root"<<endl;
    cout<<"10. Sine "<<endl;
    cout<<"11. Cosine"<<endl;
    cout<<"12. Tangent"<<endl;
    cout<<"13. Random numbers in a given range"<<endl;
    cout<<"14. Permutations"<<endl;
    cout<<"15. Combinations"<<endl;
    cout<<"16. Natural logarithm"<<endl;
    cout<<"17. Absolute value"<<endl;
    cout<<"18. Percentage"<<endl;
    
    cin>>choice;
    
    return choice;
}

int main()
{   
    int chosen_option = display_info();
    cout<<"You chose the "<<chosen_option<<"-th option"<<endl;
    
    double variable1, variable2, result, power ;
    int answer;
    
    switch ( chosen_option )
    {
        case 1 : cout<<"Enter first value : "<<endl;
                 cin>>variable1;
                 cout<<"Enter second value : "<<endl;
                 cin>>variable2;
                 result = variable1 + variable2;
                 cout<<"Sum is "<<result<<endl;
                 break;
                 
        case 2 : cout<<"Enter first value : "<<endl;
                 cin>>variable1;
                 cout<<"Enter second value : "<<endl;
                 cin>>variable2;
                 result = variable1 - variable2;
                 cout<<"Difference is "<<result<<endl;
                 break;
                 
        case 3 : cout<<"Enter first value : "<<endl;
                 cin>>variable1;
                 cout<<"Enter second value : "<<endl;
                 cin>>variable2;
                 result = variable1 * variable2;
                 cout<<"Product is "<<result<<endl;
                 break;
                 
        case 4 : cout<<"Enter first value : "<<endl;
                 cin>>variable1;
                 cout<<"Enter second value : "<<endl;
                 cin>>variable2;
                 
                 if ( variable2 == 0 )
                    cout<<"Please enter a non-zero value"<<endl;
                    
                 else
                 {
                    result = variable1 / variable2;
                    cout<<"Division gave "<<result<<endl;
                 }
                 break;
                 
        case 5 : cout<<"Enter a value : "<<endl;
                 cin>>variable1;
                 answer = factorial( (int)variable1 );
                 cout<<(int)variable1 <<"factorial is "<<answer<<endl;
                 break;
                 
        case 6 : cout<<"Enter the variable : "<<endl;
                 cin>>variable1;
                 cout<<"Square root of "<<variable1<<" is "<<sqrt(variable1)<<endl;
                 break;
                 
        case 7 : cout<<"Enter the variable : "<<endl;
                 cin>>variable1;
                 cout<<exp(variable1)<<endl;
                 break;
                 
        case 8 : cout<<"Enter the variable and the power to which variable must be raised : "<<endl;
                 cin>>variable1;
                 cin>>power;
                 cout<<pow( variable1, power )<<endl;
                 cout<<PI<<endl;
                 break;
                 
        case 9 : cout<<"Enter the variable and the n-th root value: "<<endl;
                 cin>>variable1;
                 cin>>power;
                 if( power == 0 )
                 {
                     cout<<"Zero error"<<endl;
                     break;
                 }   
                 cout<<pow(variable1, 1/power);
                 break;
                 
        case 10 : cout<<"Input angle in degrees "<<endl;
                  cin>>variable1;
                  result = sin(variable1*PI/180);
                  cout<<result<<endl;
                  break;
                  
        case 11 : cout<<"Input angle in degrees "<<endl;
                  cin>>variable1;
                  result = cos(variable1*PI/180);
                  cout<<result<<endl;
                  break;
                  
        case 12 : cout<<"Input angle in degrees "<<endl;
                  cin>>variable1;
                  result = tan(variable1*PI/180);
                  cout<<result<<endl;
                  break;
                  
        case 13 : cout<<"Enter the lower range limit "<<endl;
                  cin>>variable1;
                  cout<<"Enter upper range limit "<<endl;
                  cin>>variable2;
                  cout<<"How many random numbers do you need?"<<endl;
                  cin>>answer;
                  
                  srand(time(0));
                  
                  for ( unsigned int i = 0 ; i < answer ; i++ )
                  {
                      result = rand()%(int)variable2 + variable1 ;
                      cout<<result<<endl;
                  }
                  break;
                  
        case 14 : cout<<"Enter the total number of elements "<<endl;
                  cin>>variable1;
                  cout<<"Enter the number elements in subset"<<endl;
                  cin>>variable2;
                  
                  if ( variable2 > variable1 )
                    cout<<"Error in order of variables"<<endl;
                    
                  else
                  {
                      answer = ( factorial( (int)variable1) ) / ( factorial( (int)variable1 - (int)variable2 ) );
                      cout<<answer<<endl;
                  }
                  
                  break;
                  
        case 15 : cout<<"Enter the total number of elements "<<endl;
                  cin>>variable1;
                  cout<<"Enter the number elements in subset"<<endl;
                  cin>>variable2;
                  
                  if ( variable2 > variable1 )
                    cout<<"Error in order of variables"<<endl;
                    
                  else
                  {
                      answer = ( factorial((int)variable1)) / ( factorial((int)variable2) * ( factorial( (int)variable1 - (int)variable2 )) );
                      cout<<answer<<endl;
                  }
                  
                  break;
                  
        case 16 : cout<<"Enter the variable "<<endl;
                  cin>>variable1;
                  
                  if ( variable1 > 0 )
                    cout<<log(variable1)<<endl;
                    
                  else
                    cout<<"C'mon, the argument cannot be zero "<<endl;
                    
                 break;
                 
        case 17 : cout<<"Enter the variable : "<<endl;
                  cin>>variable1;
                  
                  cout<<abs(variable1)<<endl;
                  break;
                  
        case 18 : cout<<"Enter the fraction : "<<endl;
                  cin>>variable1;
                  cout<<"Enter the total value possible"<<endl;
                  cin>>variable2;
                  
                  result = ( variable1 / variable2 ) * 100 ;
                  cout<<result<<"%"<<endl;
                  break;
                  
        default : cout<<"Please choose a valid option"<<endl;
                  
    }
    
    return 0;
}

// a simple program