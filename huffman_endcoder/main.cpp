#include <bits/stdc++.h>
#include <fstream>
#include <chrono>
#include <thread>
#include <unistd.h>
using namespace std;

// global data structures
map<char, int> char_freq;

class Node
{
public:
    int key;
    Node *left, *right;

    Node()
    {
        this->key = 0;
        left = right = NULL;
    }
    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
} * root;

int count_characters(string message)
{
    for (char ch : message)
    {
        if (!char_freq.count(ch))
        {
            char_freq[ch] = 0;
        }
        else
        {
            char_freq[ch]++;
        }
    }
}

bool cmp_op(Node a, Node b)
{
    return a.key < b.key;
}

string generate_huffman_string(string message)
{
    vector<Node> store_before_tree;
    count_characters(message);
    for (auto it = char_freq.begin(); it != char_freq.end(); it++)
    {
        Node temp(it->second);
        store_before_tree.emplace_back(temp);
    }
    sort(store_before_tree.begin(), store_before_tree.end(), cmp_op);
}

void optimally_merge_tree(vector<Node> store)
{
}

int main()
{
    fstream file_handler;
    string message = "", bit_sequence = "";

    file_handler.open("msg.txt", fstream::app);
    file_handler >> message;
    file_handler.close();

    bit_sequence = generate_huffman_string(message);
    file_handler.open("output.txt", fstream::app);
    file_handler << bit_sequence;
    file_handler.close();

    return 0;
}
