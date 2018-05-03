#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
/*
iterator begin();  +
const_iterator begin() const;                                 +
Возвращает итератор для первого элемента в отображении.
-------------------------------------------------------------------------------
void clear();
                                                            +
Удаляет все элементы из отображения.
--------------------------------------------------------------------------------
size_type count(const key_type &k) const;
                                                                +
Возвращает число вхождений ключа k в отображении (1 или 0).
--------------------------------------------------------------------------------
bool empty() const;
                                                                +
Возвращает значение true, если данное отображение пустое, и false в противном случае.
------------------------------------------------------------------------------
const_iterator end() const;
iterator end();                                                 +-
Возвращает итератор, указывающий на конец отображения.
--------------------------------------------------------------------------------
// map {(4, ty) (9, TY) (15, dsfd) (15, aS) (15, PIIU) (20, iu)}
pair<iterator, iterator> equal_range(const key_type &k);
pair<const_iterator, const_iterator> equal_range(const key_type &k) const;       +-
Возвращает пару итераторов, которые указывают на первый и последний элементы в отображении, содержащие заданный ключ.
--------------------------------------------------------------------------------
void erase(iterator i);
                                                        +
Удаляет элемент, адресуемый итератором i.
-------------------------------------------------------------------------------
void erase(iterator start, iterator end);
Удаляет элементы в диапазоне, задаваемом параметрами start и end.  +
--------------------------------------------------------------------------------
size_type erase(const key_type &k);
                                                                    +
Удаляет из отображения элементы, ключи которых имеют значение k.
--------------------------------------------------------------------------------
iterator find(const key_type &k);
const_iterator find(const key_type &k) const;                       +
Возвращает итератор для заданного ключа. Если ключ не обнаружен, возвращает итератор до конца отображения.
--------------------------------------------------------------------------------
allocator_type get_allocator() const;                           -
Возвращает распределитель отображения.
--------------------------------------------------------------------------------
iterator insert(iterator i, const value_type &val);                 +
Вставляет значение val после элемента, заданным итератором i, возвращает итератор для этого элемента.
--------------------------------------------------------------------------------
template <class InIter> void insert(InIter start, InIter end);      -
Вставляет элементы заданного диапазона.
--------------------------------------------------------------------------------
pair<iterator, bool> insert(const value_type &val);                  +

Вставляет значение val в используемое отображение. Возвращает итератор для данного отображения. Элемент вставляет только в том случае, если его еще нет в отображении. Если элемент был вставлен возвращает пару pair<iterator, true>, в противном случае pair<iterator, false>
--------------------------------------------------------------------------------
key_compare key_comp() const;
Возвращает объект-функцию, которая сравнивает ключи.                +
--------------------------------------------------------------------------------
iterator lower_bound(const key_type &k);
const_iterator lower_bound(const key_type &k) const;                   +
Возвращает итератор для первого элемента в отображении, ключ которого равен значению k или больше этого значения.
--------------------------------------------------------------------------------
size_type max_size() const;
Возвращает максимальное число элементов, которое может содержать отображение.
--------------------------------------------------------------------------------
reference operator[](const key_type &i);
Возвращает ссылку на элемент, заданный параметром i. Если этого элемента не существует, вставляет его в отображение.
--------------------------------------------------------------------------------
reverse_iterator rbegin();
const_reverse_iterator rbegin() const;
Возвращает реверсивный итератор для конца отображения.
--------------------------------------------------------------------------------
reverse_iterator rend();
const_reverse_iterator rend() const;
Возвращает реверсивный итератор для начала отображения.
--------------------------------------------------------------------------------
size_type size() const;
Возвращает текущее количество элементов в отображении.
--------------------------------------------------------------------------------
void swap(map<Key, T, Comp, Allocator> &ob);
Выполняет обмен элементами данного отображения и отображения ob.
--------------------------------------------------------------------------------
iterator upper_bound(const key_type &k);
const_iterator upper_bound(const key_type &k) const;
Возвращает итератор для первого элемента в отображении, ключ которого больше заданного значения k.
--------------------------------------------------------------------------------
value_compare value_comp() const;
Возвращает объект-функцию, которая сравнивает значения.
#include <iostream>
*/

void show(pair<int,int> p)
{
    cout<<p.first<<" "<<p.second<<endl;
}
void show2(pair<int,char> p)
{
    cout<<p.first<<" "<<p.second<<endl;
}
int main()
{
//1  //iterator begin();
 //const_iterator begin() const;
 //Возвращает итератор для первого элемента в отображении.
    std::map<int,int> table;
    for(int i=0;i<5;++i)
    {
        table.insert(make_pair(i,i+10));
    }
    cout<<table.size()<<endl;
    cout<<endl;
    cout<<"my Table\n";
    std::map<int,int>::iterator it=table.begin();
    std::cout << it->first << " => " << it->second << '\n';
    for_each(table.begin(), table.end(),show);
    cout<<endl;
    
    
    //void clear();
    //Удаляет все элементы из отображения.
    table.clear();
    cout<<"my Table\n";
    for(int i=0;i<5;++i)
    {
        table.insert(make_pair(i,i+100));
    }
    std::map<int,int>::iterator pop=table.begin();
    std::cout << pop->first << " => " << pop->second << '\n';
    for_each(table.begin(), table.end(),show);
    cout<<endl;
    //size_type count(const key_type &k) const;
    //Возвращает число вхождений ключа k в отображении (1 или 0).
    
    if(table.count(5))
    {
        cout<<"True";
    }
    else
        cout<<"False";
    cout<<endl;
    
    //bool empty() const;
    //Возвращает значение true, если данное отображение пустое, и false в противном случае.
    if(!table.empty())
    {
        cout<<"True";
    }
    else
        cout<<"False";
    
    cout<<endl;
    //const_iterator end() const;
    //iterator end();
    //Возвращает итератор, указывающий на конец отображения.
    map<int,char> sprite;
    for(int i=0;i<3;++i)
    {
        sprite.insert(make_pair(i,(char)30+arc4random()%70));
    }
    for_each(sprite.begin(),sprite.end(),show2);
    std::map<int,char>::iterator ends=sprite.end();
    cout<<ends->first<<" "<<ends->second<<endl;
    
    //-------------------------------------------------------
    //pair<iterator, iterator> equal_range(const key_type &k);
    //pair<const_iterator, const_iterator> equal_range(const key_type &k) const;
    //Возвращает пару итераторов, которые указывают на первый и последний элементы в отображении, содержащие заданный ключ.
    sprite.insert(make_pair(4,'A'));
    for_each(sprite.begin(),sprite.end(),show2);
    cout<<endl;
    std::pair<std::map<int,char>::iterator, std::map<int,char>::iterator> pops;
    pops=sprite.equal_range(2);
    cout<<pops.first->first<<" "<<pops.first->second<<endl;
    cout<<pops.second->first<<" "<<pops.second->second;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //void erase(iterator i);
    //Удаляет элемент, адресуемый итератором i.
    sprite.erase(0);
    for_each(sprite.begin(),sprite.end(),show2);
    cout<<endl<<endl;
    map<int,char>::iterator its=sprite.begin();
    its++;
    sprite.erase(its);
    for_each(sprite.begin(),sprite.end(),show2);
    cout<<endl<<endl<<endl;
    //void erase(iterator start, iterator end);
    //Удаляет элементы в диапазоне, задаваемом параметрами start и end.
    map<int,char> sprite2;
    for(int i=0;i<10;++i)
    {
        sprite2.insert(make_pair(i,(char)50+arc4random()%70));
    }
    for_each(sprite2.begin(),sprite2.end(),show2);
    map<int,char>::iterator its1;
//    map<int,char>::iterator its2=sprite2.end();
    cout<<endl;
    its1=sprite2.begin();
    its1++;
    its1++;
    sprite2.erase(its1,sprite2.end());
    for_each(sprite2.begin(),sprite2.end(),show2);
    //size_type erase(const key_type &k);
    //Удаляет из отображения элементы, ключи которых имеют значение k.
    cout<<endl;
    sprite2.erase(0);
    for_each(sprite2.begin(),sprite2.end(),show2);
    cout<<endl;
    //iterator find(const key_type &k);
    //const_iterator find(const key_type &k) const;
    //Возвращает итератор для заданного ключа. Если ключ не обнаружен, возвращает итератор до конца отображения.
    cout<<"iterator find(const key_type &k);\n";
    cout<<"const_iterator find(const key_type &k) const;\n";
    cout<<"Возвращает итератор для заданного ключа. Если ключ не обнаружен, возвращает итератор до конца отображения.\n";
    map<int,int> cola;
    int j=0;
    for (int i=0;i<10;++i)
    {
        cola.insert(make_pair(i,j));
        j=j+100;
    }
    for_each(cola.begin(),cola.end(),show);
    cout<<"Size=";
    cout<<cola.size()<<endl;
    cola.erase(cola.find(5));
    for_each(cola.begin(),cola.end(),show);
    //allocator_type get_allocator() const;
    //Возвращает распределитель отображения.
    //?
    cout<<"iterator insert(iterator i, const value_type &val)\n";
    cout<<"Вставляет значение val после элемента, заданным итератором i, возвращает итератор для этого элемента\n";
    cola.insert(pair<int, int>(11,200));
    cout<<endl;
    for_each(cola.begin(),cola.end(),show);
    cout<<endl;
   // template <class InIter> void insert(InIter start, InIter end);
   // Вставляет элементы заданного диапазона.
  //-----------------------------------------------------------------
    

   // pair<iterator, bool> insert(const value_type &val);
    //Вставляет значение val в используемое отображение. Возвращает итератор для данного отображения. Элемент вставляет только в том случае, если его еще нет в отображении. Если элемент был вставлен возвращает пару pair<iterator, true>, в противном случае pair<iterator, false>
    
    
    std::pair<map<int, int>::iterator, bool> err = cola.insert(make_pair(15, 55));
    for_each(cola.begin(),cola.end(),show);
    
    
    //key_compare key_comp() const;
    //Возвращает объект-функцию, которая сравнивает ключи.
    std::map<char,int> mymap;
    std::map<char,int>::key_compare mycomp = mymap.key_comp();
    mymap['a']=100;
    mymap['b']=200;
    mymap['c']=300;
    std::cout << "mymap contains:\n";
    char highest = mymap.rbegin()->first;     // key value of last element
    std::map<char,int>::iterator itis = mymap.begin();
    do {
        std::cout << itis->first << " => " << itis->second << '\n';// зпомнить
    } while ( mycomp((*itis++).first, 'b') );
    std::cout << '\n';
    //iterator lower_bound(const key_type &k);
    //const_iterator lower_bound(const key_type &k) const;
    //Возвращает итератор для первого элемента в отображении, ключ которого равен значению k или больше этого значения.
    map<int,int>::iterator s1,s2;
    s1=cola.lower_bound(2);
    s2=cola.lower_bound(5);
    cola.erase(s1,s2);
    for_each(cola.begin(),cola.end(),show);
    
    
    //size_type max_size() const;
    //Возвращает максимальное число элементов, которое может содержать отображение.

    cout<<endl;
    cout<<cola.max_size()<<endl;
    
    //reference operator[](const key_type &i);
    //Возвращает ссылку на элемент, заданный параметром i. Если этого элемента не существует, вставляет его в отображение.
    
    cola.operator[](16);
     cout<<endl;
    for_each(cola.begin(),cola.end(),show);
    cout<<endl;
   // --------------------------------------------------------------------------------
    //reverse_iterator rbegin();
    //const_reverse_iterator rbegin() const;
    //Возвращает реверсивный итератор для конца отображения.
    
    //reverse_iterator rend();
    // const_reverse_iterator rend() const;
    //Возвращает реверсивный итератор для начала отображения.
    for_each(cola.rbegin(),cola.rend(),show);
   // --------------------------------------------------------------------------------
   // void swap(map<Key, T, Comp, Allocator> &ob);
    //Выполняет обмен элементами данного отображения и отображения ob.
    cola.swap(table);
    
    
   // --------------------------------------------------------------------------------
    //iterator upper_bound(const key_type &k);
    //const_iterator upper_bound(const key_type &k) const;
    // Возвращает итератор для первого элемента в отображении, ключ которого больше заданного значения k.

    //--------------------------------------------------------------------------------
    //value_compare value_comp() const;
    //Возвращает объект-функцию, которая сравнивает значения.
    cout<<endl;
    std::map<char,int> mymap1;
    
    mymap1['x']=1001;
    mymap1['y']=2002;
    mymap1['z']=3003;
    
    std::cout << "mymap contains:\n";
    
    std::pair<char,int> highest1 = *mymap1.rbegin();          // last element
    
    std::map<char,int>::iterator it1 = mymap1.begin();
    do {
        std::cout << it1->first << " => " << it1->second << '\n';
    } while ( mymap1.value_comp()(*it1++, highest1) );

}   
