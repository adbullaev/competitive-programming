int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) 
{
    int d = gcd(a,b);
    int a = a/d;
    int b = b/d;
    return a*b;
}