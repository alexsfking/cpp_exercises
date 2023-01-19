//Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

/*
You need to overload operators + and << for the Complex class.
The operator + should add complex numbers according to the rules of complex addition:
(a+bi)+(c+di)=(a+c)+(b+d)i
returning a single complex number
The overloaded operator << should add "a+bi" to the stream where a is the real part
and b is the imaginary part of the complex number which is then passed as a parameter
to the overloaded operator.
*/

//Write code here
Complex operator +(Complex c1, Complex c2){
    Complex c;
    c.a=c1.a+c2.a;
    c.b=c1.b+c2.b;
    return c;
}

ostream & operator <<(ostream &out, Complex c){
    out << c.a << "+i" << c.b;
    return out;
}
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
