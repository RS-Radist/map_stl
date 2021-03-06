# iterator begin();  +
const_iterator begin() const;                                 +
Возвращает итератор для первого элемента в отображении.
-------------------------------------------------------------------------------
# void clear();                                                           +
Удаляет все элементы из отображения.
--------------------------------------------------------------------------------
# size_type count(const key_type &k) const;                                                              +
Возвращает число вхождений ключа k в отображении (1 или 0).
--------------------------------------------------------------------------------
# bool empty() const;                                                               +
Возвращает значение true, если данное отображение пустое, и false в противном случае.
------------------------------------------------------------------------------
# const_iterator end() const;
iterator end();                                                 +-
Возвращает итератор, указывающий на конец отображения.
--------------------------------------------------------------------------------
// map {(4, ty) (9, TY) (15, dsfd) (15, aS) (15, PIIU) (20, iu)}
# pair<iterator, iterator> equal_range(const key_type &k);
# pair<const_iterator, const_iterator> equal_range(const key_type &k) const;       +-
Возвращает пару итераторов, которые указывают на первый и последний элементы в отображении, содержащие заданный ключ.
--------------------------------------------------------------------------------
# void erase(iterator i);                                                       +
Удаляет элемент, адресуемый итератором i.
-------------------------------------------------------------------------------
# void erase(iterator start, iterator end);
Удаляет элементы в диапазоне, задаваемом параметрами start и end.  +
--------------------------------------------------------------------------------
# size_type erase(const key_type &k);                                                                   +
Удаляет из отображения элементы, ключи которых имеют значение k.
--------------------------------------------------------------------------------
# iterator find(const key_type &k);
# const_iterator find(const key_type &k) const;                       +
Возвращает итератор для заданного ключа. Если ключ не обнаружен, возвращает итератор до конца отображения.
--------------------------------------------------------------------------------
# allocator_type get_allocator() const;                           -
Возвращает распределитель отображения.
--------------------------------------------------------------------------------
# iterator insert(iterator i, const value_type &val);                 +
Вставляет значение val после элемента, заданным итератором i, возвращает итератор для этого элемента.
--------------------------------------------------------------------------------
# template <class InIter> void insert(InIter start, InIter end);      -
Вставляет элементы заданного диапазона.
--------------------------------------------------------------------------------
# pair<iterator, bool> insert(const value_type &val);                  +
Вставляет значение val в используемое отображение. Возвращает итератор для данного отображения. Элемент вставляет только в том случае, если его еще нет в отображении. Если элемент был вставлен возвращает пару pair<iterator, true>, в противном случае pair<iterator, false>
--------------------------------------------------------------------------------
# key_compare key_comp() const;
Возвращает объект-функцию, которая сравнивает ключи.                +
--------------------------------------------------------------------------------
# iterator lower_bound(const key_type &k);
const_iterator lower_bound(const key_type &k) const;                   +
Возвращает итератор для первого элемента в отображении, ключ которого равен значению k или больше этого значения.
--------------------------------------------------------------------------------
# size_type max_size() const;
Возвращает максимальное число элементов, которое может содержать отображение.
--------------------------------------------------------------------------------
# reference operator[](const key_type &i);
Возвращает ссылку на элемент, заданный параметром i. Если этого элемента не существует, вставляет его в отображение.
--------------------------------------------------------------------------------
# reverse_iterator rbegin();
# const_reverse_iterator rbegin() const;
Возвращает реверсивный итератор для конца отображения.
--------------------------------------------------------------------------------
# reverse_iterator rend();
const_reverse_iterator rend() const;
Возвращает реверсивный итератор для начала отображения.
--------------------------------------------------------------------------------
# size_type size() const;
Возвращает текущее количество элементов в отображении.
--------------------------------------------------------------------------------
# void swap(map<Key, T, Comp, Allocator> &ob);
Выполняет обмен элементами данного отображения и отображения ob.
--------------------------------------------------------------------------------
# iterator upper_bound(const key_type &k);
const_iterator upper_bound(const key_type &k) const;
Возвращает итератор для первого элемента в отображении, ключ которого больше заданного значения k.
--------------------------------------------------------------------------------
# value_compare value_comp() const;
Возвращает объект-функцию, которая сравнивает значения.
