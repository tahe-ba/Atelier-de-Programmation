int EstTrie(int T[], int taille)
{

    if(taille==1)
    {return 1;}
    else
    {
        if(T[taille-2]>T[taille-1])
        {return 0;}
        else
        {return(T,taille-1);}
    }
}
