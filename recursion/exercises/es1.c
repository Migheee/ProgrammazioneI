int conta(int num){
    if(num<10)
        return 1;
    return 1+conta(num/10);
}
