#include"lista.h"
Link* Link::insert(Link *n)
{
	if(n==0)
	return this;
	if (this==0)
	return n;
	n->succ=this;
	if(this->prev)
	this->prev->succ=n;
	n->prev=this->prev;
	this->prev=n;
	return n;
}
Link* Link::insert(Link *n)
{
	Link *p=this;
	if(n==0)return p;
	if(p==0)return n;
	n->succ=p;
	if(p->prev) p->prev->succ=n;
	n->prev=p->prev;
	p->prev=n;
	return n;
}
