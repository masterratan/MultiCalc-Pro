#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n==0 or n==1) return 1;
    return n*fac(n-1);
}
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int countFactors(int n){
    int count=0;
    for(int i=1; i<sqrt(n); i++) if(!(n%i)) count++;
    for(int i=sqrt(n); i>=1; i--) if(!(n%i)) count++;
    return count;
}
void printFactors(int n){
    for(int i=1; i<sqrt(n); i++){
        if(!(n%i)) cout<<i<<" ";
    }
    for(int i=sqrt(n); i>=1; i--){
        if(!(n%i)) cout<<n/i<<" ";
    }
}
int sumFactors(int n){
    int sum=0;
    for(int i=1; i<sqrt(n); i++) if(!(n%i)) sum += i;
    for(int i=sqrt(n); i>=1; i--) if(!(n%i)) sum += n/i;
    return sum;
}
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(!(n%i)) return false;
    }
    return true;
}
int gif(float n){
    bool neg = false;
    if(n<0){
        neg = true;
        n *= -1;
    }
    int k = (int)n;
    if(!neg) return k;
    return -1*(k+1);
}
int HCF(int a, int b){
    if(!(b%a)) return a;
    return HCF(b%a, a);
}
int LCM(int a, int b){
    return (a*b)/HCF(a,b);
}
int permutation(int n,int r){
    int p = fac(n)/fac(n-r);
    return p;
}
int combination(int n,int r){
    int c = fac(n)/(fac(r)*fac(n-r));
    return c;
}
bool isPerfect(int n) {
    int sum = 0;
    for(int i=1; i<sqrt(n); i++) if(!(n%i)) sum += i;
    for(int i=sqrt(n); i>1; i--) if(!(n%i)) sum += n/i;
    return sum == n;
}
void primeFactors(int n){
    for(int i=2; i<sqrt(n); i++){
        if(!(n%i) and isPrime(i)) cout<<i<<" ";
    }
    for(int i=sqrt(n); i>=1; i--){
        if(!(n%i) and isPrime(n/i)) cout<<n/i<<" ";
    }
}
int binary_to_decimal(string &binary){
    int n = binary.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        if(binary[i]!='0' and binary[i]!='1') return -1;
        if(binary[i]=='1') sum += 1<<(n-i-1);
    }
    return sum;
}
string decimal_to_binary(int n){
    string result = "";
    while(n>0){
        if(n%2 == 0){
            // even
            result = "0" + result;
        }
        else {
            // odd
            result = "1" + result;
        }
        n /= 2;
    }
    return result;
}
int main(){
    // Introduction
    cout<<endl<<"Hello! Good Morning"<<endl<<"Welcome to my First Project using C++ !!"<<endl<<"This is a Multipurpose Calculator which helps you to perform various mathematical operations which are used in day to day life !!"<<endl;
    cout<<endl<<"Please select a key"<<endl<<"1 -> Start"<<endl<<"0 -> End"<<endl;
    int start;
    cout<<"Enter: ";
    cin>>start;
    if(start != 0 and start != 1){
        cout<<"Error 404: Invalid Input !!";
        return 1;
    }
    else if(!start){
        cout<<"Thanks for using our Multipurpose Calculator !!";
        return 1;
    }
    // Operations
    cout<<endl<<"Please select an operation:-"<<endl;
    cout<<"Basic Mathematical Operations"<<endl;
    cout<<"1. Addition              2. Subtraction              3. Multiplication               4. Divison"<<endl;
    cout<<"5. Factorial             6. Power                    7. Square                       8. Cube"<<endl;
    cout<<"9. Remainder             10. Square Root             11. Cube Root                   12. Total Factors"<<endl;
    cout<<"13. Prime or Composite   14. GIF                     15. Find Factors                16. HCF"<<endl;
    cout<<"17. LCM                  18. Percentage              19. Permutation                 20. Combination"<<endl;
    cout<<"21. Perfect no. or Not   22. Absolute Value          23. Sum of Factors              24. Sum of A.P."<<endl;
    cout<<"25. Sum of G.P.          26. Find Prime Factors      27. nth term of A.P.            28. nth term of G.P."<<endl;
    cout<<endl;

    cout<<"Basic Conversions"<<endl;
    cout<<"29. Binary -> Decimal    30. Decimal -> Binary       31. Rupees -> Dollar            32. Dollar -> Rupees"<<endl;
    cout<<"33. Rupees -> Euros      34. Euros -> Rupees         35. Celcius -> Fahrenheit       36. Fahrenheit -> Celcius"<<endl;
    cout<<"37. Celcius -> Kelvin    38. Kelvin -> Celcius       39. Kelvin -> Fahrenheit        40. Fahrenhiet -> Kelvin"<<endl;
    cout<<"41. m/s -> km/hr         42. km/hr -> m/s            43. acres -> metre sq           44. metre sq -> acres"<<endl;
    cout<<"45. hectares -> metre sq 46. metre sq -> hectares    47. square feet -> metre sq     48. metre sq -> square feet"<<endl;

    int n;
    cout<<endl<<"Enter: ";
    cin>>n;

    // Codes for Basic Mathematical Operations
    if(n<1 or n>48){
        cout<<"Error 404: Invalid Input !!";
        return 1;
    }
    // single input -> 5,7,8,10,11,12,13,14,15,21,22,23,26
    else if(n==5 or n==7 or n==8 or n==10 or n==11 or n==12 or n==13 or n==15 or n==21 or n==22 or n==23 or n==26){
        // integer input -> 5,12,13,15,21,23,26
        if(n==5 or n==12 or n==13 or n==15 or n==21 or n==23 or n==26){
            cout<<"Note:- Input must be a positive integer"<<endl;
            int a;
            cout<<"Enter number: ";
            cin>>a;
            if(a<0){
                cout<<"Error 404: Invalid Input !!";
                return 1;
            }

            if(n==5){ // factorial
                cout<<endl<<"Output"<<endl<<fac(a);
                return 1;
            }
            else if(n==12){ // total factors
                cout<<endl<<"Output"<<endl<<countFactors(a);
                return 1;
            }
            else if(n==13){ // prime or composite
                cout<<endl<<"Output"<<endl;
                if(isPrime(a)) cout<<"Prime Number";
                else cout<<"Composite Number";
                return 1;
            }
            else if(n==15){ // find factors
                cout<<endl<<"Output"<<endl;
                printFactors(a);
                return 1;
            }
            else if(n==21){ // perfect no. or not
                cout<<endl<<"Output"<<endl;
                if(isPerfect(a)) cout<<"Perfect Number";
                else cout<<"Not a Perfect Number";
                return 1;
            }
            else if(n==23){ // sum of factors
                cout<<endl<<"Output"<<endl<<sumFactors(a);
                return 1;
            }
            else if(n==26){ // find prime factors
                cout<<endl<<"Output"<<endl;
                primeFactors(a);
                return 1;
            }
        }
        // decimal input -> 7,8,10,11,14,22
        else {  
            if(n==10) cout<<"Note:- Input can be integer as well as decimal but must be positive for square root operation"<<endl;
            else cout<<"Note:- Input can be integer as well as decimal"<<endl;
            float a;
            cout<<"Enter number: ";
            cin>>a;

            if(n==7){ // square
                cout<<endl<<"Output"<<endl<<a*a;
                return 1;
            }
            else if(n==8){ // cube
                cout<<endl<<"Output"<<endl<<a*a*a;
                return 1;
            }
            else if(n==10){ // square root
                if(a<0){
                    cout<<"Error 404: Invalid Input !!";
                    return 1;
                }
                cout<<endl<<"Output"<<endl<<sqrt(a);
                return 1;
            }
            else if(n==11){ // cube root
                cout<<endl<<"Output"<<endl<<cbrt(a);
                return 1;
            }
            else if(n==14){ // gif
                cout<<endl<<"Output"<<endl<<gif(a);
                return 1;
            }
            else if(n==22){ // absolute value
                cout<<endl<<"Output"<<endl<<abs(a);
                return 1;
            }
        }
    }
    // double input -> 1,2,3,4,6,9,14,16,17,18,19,20
    else if(n==1 or n==2 or n==3 or n==4 or n==6 or n==9 or n==16 or n==17 or n==18 or n==19 or n==20){
        // integer input -> 6,9,16,17,19,20
        if(n==6 or n==9 or n==16 or n==17 or n==19 or n==20){
            cout<<"Note:- Inputs must be an positive integers"<<endl;
            if(n==6) cout<<"For Power, number-1 represents base and number-2 represents exponents"<<endl;
            else if(n==9)cout<<"For Remainder, number-1 represents dividend and number-2 represents divisor"<<endl;
            else if(n==19) cout<<"For Permutation, format is (number-1)P(number-2)"<<endl;
            else if(n==20) cout<<"For Combination, format is (number-1)C(number-2)"<<endl;
            int a,b;
            cout<<"Enter number-1: ";
            cin>>a;
            cout<<"Enter number-2: ";
            cin>>b;
            if(a<0 or b<0){
                cout<<"Error 404: Invalid Input !!";
                return 1;
            }

            if(n==6){ // power
                cout<<endl<<"Output"<<endl<<power(a,b);
                return 1;
            }
            else if(n==9){ // remainder
                cout<<endl<<"Output"<<endl<<a%b;
                return 1;
            }
            else if(n==16){ // hcf
                cout<<endl<<"Output"<<endl<<HCF(a,b);
                return 1;
            }
            else if(n==17){ // lcm
                cout<<endl<<"Output"<<endl<<LCM(a,b);
                return 1;
            }
            else if(n==19){ // permutation
                cout<<endl<<"Output"<<endl<<permutation(a,b);
                return 1;
            }
            else if(n==20){ // combination
                cout<<endl<<"Output"<<endl<<combination(a,b);
                return 1;
            }
        }
        // decimal input -> 1,2,3,4,18
        else{
            cout<<"Note:- Inputs can be integer as well as decimals"<<endl;
            if(n==18) cout<<"For Percentage, format is (number-1)% of (number-2)"<<endl;
            else if(n==4) cout<<"For Division, number-1 represents dividend and number-2 represents divisor"<<endl;
            float a,b;
            cout<<"Enter number-1: ";
            cin>>a;
            cout<<"Enter number-2: ";
            cin>>b;

            if(n==1){ // addition
                cout<<endl<<"Output"<<endl<<a+b;
                return 1;
            }
            else if(n==2){ // subtraction
                cout<<endl<<"Output"<<endl<<a-b;
                return 1;
            }
            else if(n==3){ // multiplication
                cout<<endl<<"Output"<<endl<<a*b;
                return 1;
            }
            else if(n==4){ // division
                cout<<endl<<"Output"<<endl<<a/b;
                return 1;
            }
            else if(n==18){ // percentage
                cout<<endl<<"Output"<<endl<<(a*b)/100.0;
                return 1;
            }
        }
    }
    // triple input -> 24,25,27,28
    else if(n==24 or n==25 or n==27 or n==28){
        cout<<"Note:- Inputs must be integers and 'n' must be a positive integer"<<endl;
        int a,n1;
        cout<<"Enter first term: ";
        cin>>a;
        cout<<"Enter n: ";
        cin>>n1;
        if(n1<0){
            cout<<"Error 404: Invalid Input !!";
            return 1;
        }
        if(n==24 or n==27){ // ap
            int d;
            cout<<"Enter common difference: ";
            cin>>d;

            if(n==24){ // sum of ap
                cout<<endl<<"Output"<<endl<<(n1*((2*a)+((n1-1)*d)))/2;
                return 1;
            }
            else if(n==27){ // nth term of ap
                cout<<endl<<"Output"<<endl<<(a+((n1-1)*d));
                return 1;
            }
        }
        else { // gp
            int r;
            cout<<"Enter common ratio: ";
            cin>>r;

            if(n==25){ // sum of gp
                if(r>=1) cout<<endl<<"Output"<<endl<<(a*(power(r,n1)-1))/(r-1);
                else if(r<1 and r>0) cout<<endl<<"Output"<<endl<<(a*(1-power(r,n1)))/(1-r);
                else{
                    cout<<"Error 404: Invalid Input !!";
                    return 1;
                }
                return 1;
            }
            else if(n==28){ // nth term of gp
                cout<<endl<<"Output"<<endl<<a*power(r,n1-1);
                return 1;
            }
        }
    }
    else if(n>=29 and n<=48){
        if(n>=31) cout<<"Note:- Inputs can be integer as well as decimals"<<endl;
        if((n>=31 and n<=34) or (n>=41 and n<=48)) cout<<"Note:- Inputs must be positive !!"<<endl;
        if(n==29){ // binary -> decimal
            string s;
            cout<<"Enter a binary number: ";
            cin>>s;          
            int x = binary_to_decimal(s);
            if(x != -1) cout<<endl<<"Output"<<endl<<x;
            else cout<<endl<<"Error 404: Invalid Input !!";
            return 1;
        }
        else if(n==30){ // decimal -> binary
            cout<<"Note:- Input must be a positive integer"<<endl;
            int n;
            cout<<"Enter a decimal number: ";
            cin>>n;
            cout<<endl<<"Output"<<endl<<decimal_to_binary(n);
            return 1;
        }
        else if(n==31){ // rupees -> dollar
            float rs;
            cout<<"Enter ₹: ";
            cin>>rs;
            cout<<endl<<"Output"<<endl<<"$ "<<rs*0.012;
            return 1;
        }
        else if(n==32){ // dollar -> rupees
            float d;
            cout<<"Enter $: ";
            cin>>d;
            cout<<endl<<"Output"<<endl<<"₹ "<<d*83.89;
            return 1;
        }
        else if(n==33){ // rupees -> euros
            float rs;
            cout<<"Enter ₹: ";
            cin>>rs;
            cout<<endl<<"Output"<<endl<<"€ "<<rs*0.011;
            return 1;
        }
        else if(n==34){ // euros -> rupees
            float e;
            cout<<"Enter €: ";
            cin>>e;
            cout<<endl<<"Output"<<endl<<"₹ "<<e*92.67;
            return 1;
        }
        else if(n==35){ // celcius -> fahrenheit
            float c;
            cout<<"Enter °C: ";
            cin>>c;
            cout<<endl<<"Output"<<endl<<((1.8*c)+32)<<" °F";
            return 1;
        }
        else if(n==36){ // fahrenheit -> celcius
            float f;
            cout<<"Enter °F: ";
            cin>>f;
            cout<<endl<<"Output"<<endl<<((5*(f-32))/9)<<" °C";
            return 1;
        }
        else if(n==37){ // celcius -> kelvin
            float c;
            cout<<"Enter °C: ";
            cin>>c;
            cout<<endl<<"Output"<<endl<<(c+273.15)<<" K";
            return 1;
        }
        else if(n==38){ // kelvin -> celcius
            float k;
            cout<<"Enter K: ";
            cin>>k;
            cout<<endl<<"Output"<<endl<<(k-273.15)<<" °C";
            return 1;
        }
        else if(n==39){ // kelvin -> fahrenheit
            float k;
            cout<<"Enter K: ";
            cin>>k;
            cout<<endl<<"Output"<<endl<<(((9*(k-273.15))/5)+32)<<" °F";
            return 1;
        }
        else if(n==40){ // fahrenheit -> kelvin
            float f;
            cout<<"Enter °F: ";
            cin>>f;
            cout<<endl<<"Output"<<endl<<(((5*(f-32))/9)+273.15)<<" K";
            return 1;
        }
        else if(n==41){ // m/s -> km/hr
            float mps;
            cout<<"Enter m/s: ";
            cin>>mps;
            cout<<endl<<"Output"<<endl<<((mps*18)/5)<<" km/hr";
            return 1;
        }
        else if(n==42){ // km/hr -> m/s
            float kmph;
            cout<<"Enter km/hr: ";
            cin>>kmph;
            cout<<endl<<"Output"<<endl<<((kmph*5)/18)<<" m/s";
            return 1;
        }
        else if(n==43){ // acres -> metre sq
            float acres;
            cout<<"Enter acres: ";
            cin>>acres;
            cout<<endl<<"Output"<<endl<<(acres*4046.8564)<<" metre sq";
            return 1;
        }
        else if(n==44){ // metre sq -> acres
            float ms;
            cout<<"Enter metre sq: ";
            cin>>ms;
            cout<<endl<<"Output"<<endl<<(ms*0.00024)<<" acres";
            return 1;
        }
        else if(n==45){ // hectares -> metre sq
            float h;
            cout<<"Enter hectares: ";
            cin>>h;
            cout<<endl<<"Output"<<endl<<(h*10000)<<" metre sq";
            return 1;
        }
        else if(n==46){ // metre sq -> hectares
            float ms;
            cout<<"Enter metre sq: ";
            cin>>ms;
            cout<<endl<<"Output"<<endl<<(ms*0.0001)<<" hectares";
            return 1;
        }
        else if(n==47){ // square feet -> metre sq
            float sf;
            cout<<"Enter square feet: ";
            cin>>sf;
            cout<<endl<<"Output"<<endl<<(sf*0.09290)<<" metre sq";
            return 1;
        }
        else if(n==48){ // metre sq -> square feet
            float ms;
            cout<<"Enter metre sq: ";
            cin>>ms;
            cout<<endl<<"Output"<<endl<<(ms*10.76391)<<" square feet";
            return 1;
        }
    }
    return 0;
}