int conta(int num){
    if(num<10)
        return 1;
    return 1+conta(num/10);
}


int cifrepari(int num){
    if(num<10){
        if(num%2==0)
            return 1;
        return 0;
    }
    if(num%10%2==0)
        return 1+cifrepari(num/10);
    return 0+cifrepari(num/10);
}


