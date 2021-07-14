//Bisection Algorithum for finding root of polynomial between an interval.

#include<bits/stdc++.h>
using namespace std;

// Globally defining degree and coefficient vector for constant of the polynomial.
int n;
vector <double> m;

double func(double x){
double sum=0.0;
for(int j=0;j<=n;j++){
sum = sum + double(m[j]*pow(x,j));
}
return sum;
}

void bisection(double a, double b)
{
    double EPSILON = 0.000001;  //tolerable error

    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right lower and upper guesses.Please try again!\n";
        return;
    }

    double c = a;
    while ((b-a) >= EPSILON)
    {
        // Find middle point
        c = (a+b)/2;

        // Check if middle point is root
        if (func(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

int main()
{
    cout<<"Enter degree fo your Polynomial: ";
    cin>>n;  //taking input for degree of polynomial
    m.resize(n+1);
    cout<<"Enter the coefficient of polynomial:\n";
    for(int i=0;i<=n;i++){
    cout<<"a"<<i<<" = ";
    cin>> m[i];  // taking input for constant of polynomial
    }

    //Note that lower guess should always be less than upper guess, It is because of the fact that we are moving from left to right on number line.

    cout<<"\nEnter Lower and Upper guesses:"<<endl;

    // Initial values assumed
    double a, b;
    cin>>a>>b;

    if (a>b){
    cout<<"\nYour lower guess is bigger than upper guess.\n"
    <<endl
    <<"Note that lower guess should always be less than upper guess, It is because of the fact that we are moving from left to right on real number line.\n";
    }else{
    bisection(a, b);
    }
    return 0;
}
