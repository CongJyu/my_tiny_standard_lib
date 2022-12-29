//
// My Tiny Standard Library
// Vector
// Created by CongJyu Chen
//

#ifndef MY_TINY_STANDARD_LIB_MYTINYVECTOR_H
#define MY_TINY_STANDARD_LIB_MYTINYVECTOR_H


template<typename T>
class MyTinyVector {
private:
    int vector_capacity{}, vector_size{};
    T *a;
public:
    MyTinyVector() : vector_capacity(0), vector_size(0), a(nullptr) {}

    MyTinyVector(const MyTinyVector &temp) : vector_capacity(temp.vector_capacity), vector_size(temp.vector_size) {
        a = new T[vector_capacity];
        for (int i{}; i < vector_size; ++i) {
            a[i] = temp.a[i];
        }
    }

    MyTinyVector(MyTinyVector &temp) : vector_capacity(temp.vector_capacity), vector_size(temp.vector_size), a(temp.a) {
        temp.a = nullptr;
    }

    MyTinyVector &operator=(const MyTinyVector &temp) {
        if (this == &temp) {
            return *this;
        }
        vector_capacity = temp.capacity;
        vector_size = temp.size;
        delete[] a;
        a = new T[vector_capacity];
        for (int i{}; i < vector_size; ++i) {
            a[i] = temp.a[i];
        }
        return *this;
    }

    void resize(int set_size) {
        if (set_size == 0) {
            set_size = 1;
        }
        vector_capacity = set_size;
        T *nxt{new T[vector_capacity]};
        for (int i{}; i < vector_size; ++i) {
            nxt[i] = a[i];
        }
        delete[] a;
        a = nxt;
    }

    void push_back(T element) {
        if (vector_size == vector_capacity) {
            resize(vector_size * 2);
        }
        a[vector_size] = element;
        vector_size++;
    }

    void pop_back() {
        --vector_size;
    }

    T &operator[](int index) {
        return a[index];
    }

    int size() {
        return vector_size;
    }

    int capacity() {
        return vector_capacity;
    }

    ~MyTinyVector() {
        delete[] a;
    }
};


#endif //MY_TINY_STANDARD_LIB_MYTINYVECTOR_H
