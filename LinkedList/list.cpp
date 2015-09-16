void insertlast(list *l,address p)
{
    address Q;
    Q=(*l).awal;
    while(next(Q)!=NULL)
    {
        Q=next(Q);
    }
    next(p)=NULL;
    next(Q)=p;
}
void deletelast(list *l,address *p)
{
    address Q;
    Q=(*l).awal;
    while(next(next(Q))!=NULL)
    {
        Q=next(Q);
    }
    *p=next(Q);
    next(Q)=NULL;
    delete p;

}
