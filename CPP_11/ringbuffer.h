#include <iostream>
#include <vector>

template <class T>
class Ring{
    private:
        int m_pos;
        int m_size;
        T *m_values;

    public:
        class iterator;
    
    public:
        Ring(int size): m_pos(0), m_size(size), m_values(NULL){
            m_values = new T[size];
        }
        ~Ring(){

        }

        int size(){
            return m_size;
        }

        iterator begin(){
            return iterator(0, *this);
        }

        iterator end(){
            return iterator(m_size, *this);
        }

        void addvalue(T value){
            m_values[m_pos++] = value;

            if (m_pos == m_size){
                m_pos = 0;
            }
        }

        T &get(int pos){
            return m_values[pos];
        }
};

template <class T>
class Ring<T>::iterator{
    private:
        int m_pos;
        Ring &m_ring;

    public:
        iterator(int pos, Ring &ring_ref) : m_pos(pos), m_ring(ring_ref){

        }
        ~iterator(){

        }

        iterator operator++(int){
            iterator old = *this;
            ++(*this);
            return old;
        }
        // prefix
        iterator& operator++(){
            ++m_pos;

            return *this;
        }

        bool operator!=(const iterator &other){
            return !(*this == other);
        }

        bool operator==(const iterator &other){
            return m_pos == other.m_pos;
        }

        T& operator*(){
            return m_ring.get(m_pos);
        }
        
};

