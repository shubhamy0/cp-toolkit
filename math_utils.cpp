#include "math_utils.h"

long long gcd(long long a, long long b) {
while(b!=0) {
a=a%b;
long long temp=a;
a=b;
b=temp;
}
return a;
}
long long lcm(long long a,long long b) {
return(a/gcd(a,b))*b;
}
