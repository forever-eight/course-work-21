#pragma once
template<typename T>
struct Node {
    T data;
    Node *next;
};

template<typename T>
class list_iterator {
public:

    list_iterator(Node<T> *ptr) : m_ptr(ptr) {}


    list_iterator &operator++() {
        m_ptr = m_ptr->next;
        return *this;
    }

    bool operator!=(const list_iterator &it) {
        return m_ptr != it.m_ptr;
    }

    bool operator==(const list_iterator &it) {
        return m_ptr == it.m_ptr;
    }
    T &operator*() {
        return m_ptr->data;
    }


private:
    Node<T> *m_ptr;
};

template<typename T>
class front_list {
public:

    ~front_list() {
        del_list();
    }

    void push_back(const T &x) {
        Node<T> *newnode = new Node<T>;
        newnode->data = x;

        if (first == nullptr) {
            first = newnode;
            last = newnode;
            newnode->next = nullptr;
        } else {
            last->next = newnode;
            newnode->next = nullptr;
            last = newnode;
        }
    }

    list_iterator<T> begin() {
        return list_iterator<T>(first);
    }

    list_iterator<T> end() {
        return list_iterator<T>(nullptr);
    }
    front_list() : first(nullptr), last(nullptr) {}

private:
    Node<T> *first;
    Node<T> *last;


    void del_list() {
        for (auto i = first; i != nullptr;) {
            Node<T> *extra = i->next;
            delete i;
            i = extra;
        }
    }
};