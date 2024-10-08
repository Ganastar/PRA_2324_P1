#ifndef LIST_H
#define LIST_H

template <typename T> 
class List {
    public:
       void	inster(int pos, T e);
       void	append(T e);
       void	prend(T e);
       T	remove(int pos);
       T 	get(int pos);
       int 	search(T e);
       bool 	empty();
       int	size(); // ... aquí los métodos virtuales puros
};

#endif
