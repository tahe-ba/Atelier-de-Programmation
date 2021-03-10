int PGCD1(int a, int b)
{
    if(a==b)
    {
            return a;
    }
    else
    {
        if(a>b)
           return PGCD1(a-b, b);
        else
           return PGCD1(a, b-a);
    }
}

int PGCD2(int a, int b)
{
    if(b==0)
        return a;
    else
        return PGCD2(b,a%b);
}
