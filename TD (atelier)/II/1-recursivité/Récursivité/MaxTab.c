int MaxTab(int T[],int taille)
{
    int m,r;

    if(taille==1)
    {r=T[0];}
    else
    {
        m=MaxTab(T, taille-1);
        if(m<T[taille-1])
        {r=T[taille-1];}
        else
        {r=m;}
    }
    return r;
}
