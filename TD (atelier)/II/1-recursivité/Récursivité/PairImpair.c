int Pair(int n)
{
    if(n==1)
    {return 0;}
    else
    {return Impair(N-1);}

}

int Impair(int n)
{
    if(n==1)
    {return 1;}
    else
    {return Pair(N-1);}

}

