int fatorial(int a){
    if (a == 1)
        return 1;
    else
        return a * fatorial(a -1);
}