int mcd(int a, int b){
    if(a==b)
        return a;
    if(a>b)
        return mcd(a-b, b);
    return mcd(b-a, a);
    
}